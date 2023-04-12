#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 dimensional grid created by your alloc_grid function
 * @grid: input correct value
 * @height: height of the grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
