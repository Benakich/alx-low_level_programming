#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* **alloc_grid  - fn to create 2 dim array
*
* @width: width of arrray
* @height: height of array
*
* Return: NULL on failure, if width/height is 0, return NULL else dim
*/

int **alloc_grid(int width, int height)
{
	int i;
	int n;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			grid[i][n] = 0;
		}
	}

	return (grid);
}
