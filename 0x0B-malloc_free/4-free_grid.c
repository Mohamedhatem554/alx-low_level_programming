#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - entry point
 * @grid: grid
 * @height: int
*/
void free_grid(int **grid, int height)
{
	int i;
	int *g;

	for (i = 0; i < height; i++)
	{
		g = grid[i];
		free(g);
	}
	free(grid);
}
