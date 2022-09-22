#include "main.h"

/**
 * reverse_array - fn to reverse int content of array
 *
 * @a: array of integers
 * @n: number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[n];
		a[n] = a[i];
		a[i] = m;
	}
}
