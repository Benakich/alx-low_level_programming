#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memoray allocation
 *
 * @grid: 2D array
 * @height: type int, height of 2D array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
