Repo for procedural dungeon generator

# SpaceDungeonsRepo

This repository contains an Unreal Engine project for procedural room-based dungeon generation, including a cellular automata (CA) generation mode in `RoomGenerator`.

## Evaluation module (new)
A Python evaluation workflow was added to measure generated 2D CA dungeon grids using metrics adapted from:

- Tile Pattern KL-Divergence (TPKL-Div)
- Levenshtein distance
- Path-based playability rate

### Files
- `evaluation_metrics.py` – metric implementations.
- `run_evaluation.py` – generates 20 levels, evaluates them, prints results, and saves outputs.
- `evaluation_notes.md` – short interpretation of each metric.

### How to run
From the repo root:

```bash
python3 run_evaluation.py
```

### Outputs
After running, the script writes:

- `evaluation_results.json`
- `evaluation_results.csv`
- `outputs/` (PNG visualizations if `matplotlib` is available)

### Notes on CA source alignment
The Python CA grid generator in `run_evaluation.py` mirrors the C++ logic in `Source/SpaceDungeons/RoomGenerator.cpp` (`SpawnTypeCA`, `CountNeighbours`, and `SimulateStep`) so metrics can be computed without modifying existing Unreal generation behavior.
