"""Run dungeon generation evaluation for SpaceDungeons cellular automata levels.

This script mirrors the repository's C++ CA logic in `SpawnTypeCA` to generate
2D occupancy maps for metric evaluation.
"""

from __future__ import annotations

import csv
import json
from pathlib import Path
from typing import Iterable

import numpy as np

from evaluation_metrics import evaluate_generated_levels


class SpaceDungeonsCAGridGenerator:
    """Python mirror of SpaceDungeons `SpawnTypeCA` grid simulation.

    Based on the logic in `Source/SpaceDungeons/RoomGenerator.cpp`:
      - random initialization with wall probability 0.45
      - neighbour counting in 8 directions
      - out-of-bounds counts as wall (+1)
      - update rule: neighbours >= 4 -> 0 else -> 1
    """

    def __init__(self, grid_width: int = 25, grid_height: int = 25, steps: int = 4, seed: int | None = 42) -> None:
        self.grid_width = grid_width
        self.grid_height = grid_height
        self.steps = steps
        self.rng = np.random.default_rng(seed)

    def _count_neighbours(self, x: int, y: int, grid: np.ndarray) -> int:
        count = 0
        for ny in (-1, 0, 1):
            for nx in (-1, 0, 1):
                if nx == 0 and ny == 0:
                    continue
                check_x = x + nx
                check_y = y + ny
                if 0 <= check_x < self.grid_width and 0 <= check_y < self.grid_height:
                    count += int(grid[check_y, check_x])
                else:
                    count += 1
        return count

    def _simulate_step(self, grid: np.ndarray) -> np.ndarray:
        new_grid = grid.copy()
        for x in range(self.grid_height):
            for y in range(self.grid_width):
                neighbours = self._count_neighbours(x, y, grid)
                new_grid[x, y] = 0 if neighbours >= 4 else 1
        return new_grid

    def generate_level(self) -> np.ndarray:
        grid = (self.rng.random((self.grid_height, self.grid_width)) < 0.45).astype(int)
        for _ in range(self.steps):
            grid = self._simulate_step(grid)

        # Ensure explicit start and exit tiles for playability checks.
        floor_positions = np.argwhere(grid == 0)
        if len(floor_positions) > 1:
            start = tuple(floor_positions[0])
            exit_ = tuple(floor_positions[-1])
            grid[start] = 2
            grid[exit_] = 3
        return grid


def print_results(results: dict) -> None:
    print("Evaluation Results")
    print("------------------")
    print(f"Number of generated levels: {results['num_generated_levels']}")
    print()
    print("Tile Pattern KL-Divergence:")
    for k, v in results["average_tpkldiv"].items():
        print(f"{k}: {v}")
    print()
    print("Levenshtein Distance:")
    print(f"Mean distance from reference: {results['mean_levenshtein_from_reference']}")
    print(f"Standard deviation: {results['std_levenshtein_from_reference']}")
    print(f"Average pairwise generated distance: {results['average_pairwise_levenshtein']}")
    print()
    print("Playability:")
    print(f"Playable levels: {results['playable_levels']} / {results['num_generated_levels']}")
    print(f"Playability rate: {results['playability_rate'] * 100:.2f} %")


def save_results_json(path: Path, results: dict) -> None:
    path.write_text(json.dumps(results, indent=2), encoding="utf-8")


def save_results_csv(path: Path, results: dict) -> None:
    rows: list[tuple[str, float | int | str | None]] = [
        ("num_generated_levels", results["num_generated_levels"]),
        ("mean_levenshtein_from_reference", results["mean_levenshtein_from_reference"]),
        ("std_levenshtein_from_reference", results["std_levenshtein_from_reference"]),
        ("average_pairwise_levenshtein", results["average_pairwise_levenshtein"]),
        ("playable_levels", results["playable_levels"]),
        ("playability_rate", results["playability_rate"]),
    ]

    for k, v in results["average_tpkldiv"].items():
        rows.append((f"average_tpkldiv_{k}", v))

    with path.open("w", newline="", encoding="utf-8") as fp:
        writer = csv.writer(fp)
        writer.writerow(["metric", "value"])
        writer.writerows(rows)


def save_level_visualisations(reference_level: np.ndarray, generated_levels: Iterable[np.ndarray], out_dir: Path) -> None:
    """Save simple PNG visualizations if matplotlib is available."""
    try:
        import matplotlib.pyplot as plt  # Optional dependency.
    except Exception:
        return

    out_dir.mkdir(parents=True, exist_ok=True)

    def _save(level: np.ndarray, title: str, path: Path) -> None:
        plt.figure(figsize=(4, 4))
        plt.imshow(level, cmap="viridis", interpolation="nearest")
        plt.title(title)
        plt.colorbar(shrink=0.7)
        plt.tight_layout()
        plt.savefig(path)
        plt.close()

    _save(reference_level, "Reference Level", out_dir / "reference_level.png")
    for idx, level in enumerate(generated_levels, start=1):
        _save(level, f"Generated Level {idx}", out_dir / f"generated_level_{idx:02d}.png")


def main() -> None:
    generator = SpaceDungeonsCAGridGenerator(grid_width=25, grid_height=25, steps=4, seed=42)

    # One reference level (sampled from the same CA settings).
    reference_level = generator.generate_level()

    # Generate 20 levels and evaluate.
    generated_levels = [generator.generate_level() for _ in range(20)]
    results = evaluate_generated_levels(reference_level, generated_levels, window_sizes=[3, 5, 10])

    print_results(results)

    save_results_json(Path("evaluation_results.json"), results)
    save_results_csv(Path("evaluation_results.csv"), results)
    save_level_visualisations(reference_level, generated_levels, Path("outputs"))


if __name__ == "__main__":
    main()
