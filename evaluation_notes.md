# Evaluation Notes

## Tile Pattern KL-Divergence (TPKL-Div)
Lower is better. It means the local tile-pattern distribution of the generated dungeon is closer to the reference dungeon.

## Levenshtein distance from reference
This shows how different each generated dungeon is from the reference after flattening the level into a sequence.

## Average pairwise Levenshtein distance
Higher values usually indicate more diversity among generated dungeons.

## Playability rate
The percentage of generated dungeons where a valid path exists from start to exit.
