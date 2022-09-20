#include "main.h"
#include <stdio.h>

/**
 * print_array - fn to print n elements of an array of integers
 *
 * @a: pointer type int
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
