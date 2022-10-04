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

	int *A = malloc(height * width * sizeof(int));

	if (width < 1 || height < 1)
		return (NULL);
	if (A == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			*(A + i * width + n) = i + n;
		}
	}

	return (A);
}
