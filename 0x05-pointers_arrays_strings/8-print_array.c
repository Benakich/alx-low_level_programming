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

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	_putchar('\n');
}
