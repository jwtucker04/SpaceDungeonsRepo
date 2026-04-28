"""Evaluation metrics for 2D dungeon levels.

This module adapts key evaluation ideas from
"Procedural Level Generation with Diffusion Models from a Single Example"
for the Space Dungeons cellular automata setting.
"""

from __future__ import annotations

from collections import Counter, deque
from itertools import combinations
from math import log
from statistics import mean, pstdev
from typing import Any

import numpy as np


def extract_tile_patterns(level: np.ndarray, window_size: int) -> Counter:
    """Extract local square tile patterns as tuple keys in a frequency counter."""
    if window_size <= 0:
        raise ValueError("window_size must be > 0")

    level_array = np.asarray(level)
    if level_array.ndim != 2:
        raise ValueError("level must be a 2D array")

    h, w = level_array.shape
    if h < window_size or w < window_size:
        return Counter()

    patterns: Counter = Counter()
    for y in range(h - window_size + 1):
        for x in range(w - window_size + 1):
            patch = level_array[y : y + window_size, x : x + window_size]
            patterns[tuple(patch.flatten().tolist())] += 1

    return patterns


def normalise_counter(counter: Counter) -> dict[Any, float]:
    """Convert counts into probabilities."""
    total = sum(counter.values())
    if total == 0:
        return {}
    return {key: value / total for key, value in counter.items()}


def kl_divergence(p: dict[Any, float], q: dict[Any, float], epsilon: float = 1e-10) -> float:
    """Compute D_KL(P || Q) with epsilon smoothing."""
    if epsilon <= 0:
        raise ValueError("epsilon must be > 0")

    keys = set(p.keys()) | set(q.keys())
    divergence = 0.0
    for key in keys:
        p_val = p.get(key, 0.0)
        q_val = q.get(key, 0.0)
        p_s = p_val + epsilon
        q_s = q_val + epsilon
        divergence += p_s * log(p_s / q_s)
    return float(divergence)


def tile_pattern_kl_divergence(
    reference_level: np.ndarray,
    generated_level: np.ndarray,
    window_sizes: list[int] | tuple[int, ...] = (3, 5, 10),
) -> dict[int, float]:
    """Compute TPKL-Div for each requested window size that fits both levels."""
    ref = np.asarray(reference_level)
    gen = np.asarray(generated_level)
    if ref.ndim != 2 or gen.ndim != 2:
        raise ValueError("reference_level and generated_level must be 2D arrays")

    results: dict[int, float] = {}
    for ws in window_sizes:
        if ws <= 0:
            continue
        if min(ref.shape) < ws or min(gen.shape) < ws:
            continue

        p = normalise_counter(extract_tile_patterns(ref, ws))
        q = normalise_counter(extract_tile_patterns(gen, ws))
        if not p and not q:
            continue
        results[ws] = kl_divergence(p, q)

    return results


def levenshtein_distance(seq1: list[int] | np.ndarray, seq2: list[int] | np.ndarray) -> int:
    """Standard dynamic-programming Levenshtein edit distance."""
    a = np.asarray(seq1).tolist()
    b = np.asarray(seq2).tolist()

    if len(a) < len(b):
        a, b = b, a

    previous = list(range(len(b) + 1))
    for i, ca in enumerate(a, start=1):
        current = [i]
        for j, cb in enumerate(b, start=1):
            insertions = previous[j] + 1
            deletions = current[j - 1] + 1
            substitutions = previous[j - 1] + (0 if ca == cb else 1)
            current.append(min(insertions, deletions, substitutions))
        previous = current

    return int(previous[-1])


def level_levenshtein_distance(level_a: np.ndarray, level_b: np.ndarray) -> int:
    """Flatten two 2D levels and compute Levenshtein distance."""
    a = np.asarray(level_a)
    b = np.asarray(level_b)
    if a.ndim != 2 or b.ndim != 2:
        raise ValueError("Both levels must be 2D arrays")
    return levenshtein_distance(a.flatten(), b.flatten())


def average_pairwise_levenshtein(generated_levels: list[np.ndarray]) -> float:
    """Average pairwise Levenshtein distance across generated levels."""
    if len(generated_levels) < 2:
        return 0.0

    dists = [
        level_levenshtein_distance(first, second)
        for first, second in combinations(generated_levels, 2)
    ]
    return float(mean(dists)) if dists else 0.0


def is_playable(
    level: np.ndarray,
    start_tile: int | None = 2,
    goal_tile: int | None = 3,
    wall_tiles: set[int] | None = None,
) -> bool:
    """Check whether the dungeon has a traversable path from start to goal.

    Defaults:
      - walkable floor is any tile not in wall_tiles
      - wall tile defaults to {1}
      - start tile defaults to 2
      - goal tile defaults to 3

    Fallback if start/goal marker tiles are absent:
      - start = first walkable tile
      - goal = farthest reachable walkable tile from start
    """
    grid = np.asarray(level)
    if grid.ndim != 2:
        raise ValueError("level must be a 2D array")

    walls = {1} if wall_tiles is None else set(wall_tiles)
    h, w = grid.shape

    def walkable(pos: tuple[int, int]) -> bool:
        y, x = pos
        return 0 <= y < h and 0 <= x < w and int(grid[y, x]) not in walls

    start_pos = None
    goal_pos = None

    if start_tile is not None:
        starts = np.argwhere(grid == start_tile)
        if len(starts) > 0:
            sy, sx = starts[0]
            start_pos = (int(sy), int(sx))

    if goal_tile is not None:
        goals = np.argwhere(grid == goal_tile)
        if len(goals) > 0:
            gy, gx = goals[0]
            goal_pos = (int(gy), int(gx))

    if start_pos is None:
        walkables = np.argwhere(~np.isin(grid, list(walls)))
        if len(walkables) == 0:
            return False
        sy, sx = walkables[0]
        start_pos = (int(sy), int(sx))

    if not walkable(start_pos):
        return False

    neighbours = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    queue = deque([start_pos])
    visited: set[tuple[int, int]] = {start_pos}
    farthest = start_pos

    while queue:
        cy, cx = queue.popleft()
        farthest = (cy, cx)
        if goal_pos is not None and (cy, cx) == goal_pos:
            return True

        for dy, dx in neighbours:
            ny, nx = cy + dy, cx + dx
            nxt = (ny, nx)
            if nxt not in visited and walkable(nxt):
                visited.add(nxt)
                queue.append(nxt)

    if goal_pos is None:
        # No explicit goal marker; require at least one move away from start.
        return farthest != start_pos

    return False


def evaluate_generated_levels(
    reference_level: np.ndarray,
    generated_levels: list[np.ndarray],
    window_sizes: list[int] | tuple[int, ...] = (3, 5, 10),
) -> dict[str, Any]:
    """Evaluate generated dungeons against reference and among themselves."""
    if not generated_levels:
        raise ValueError("generated_levels must contain at least one level")

    per_level_tpkl = [tile_pattern_kl_divergence(reference_level, lvl, window_sizes) for lvl in generated_levels]

    avg_tpkl: dict[str, float | None] = {}
    for ws in window_sizes:
        ws_values = [entry[ws] for entry in per_level_tpkl if ws in entry]
        avg_tpkl[f"{ws}x{ws}"] = float(mean(ws_values)) if ws_values else None

    ref_lev_dist = [level_levenshtein_distance(reference_level, lvl) for lvl in generated_levels]
    playability = [is_playable(lvl) for lvl in generated_levels]

    return {
        "num_generated_levels": len(generated_levels),
        "average_tpkldiv": avg_tpkl,
        "mean_levenshtein_from_reference": float(mean(ref_lev_dist)),
        "std_levenshtein_from_reference": float(pstdev(ref_lev_dist)) if len(ref_lev_dist) > 1 else 0.0,
        "average_pairwise_levenshtein": average_pairwise_levenshtein(generated_levels),
        "playable_levels": int(sum(playability)),
        "playability_rate": float(sum(playability) / len(playability)),
    }
