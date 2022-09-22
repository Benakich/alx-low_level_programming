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
	int j;
	int m;
	int k;

	if (n % 2 != 0)
		k = n - 1;
	else
		k = n;
	for (j = 0; j <= k / 2; j++, k--)
	{
		m = a[k];
		a[k] = a[j];
		a[j] = m;
	}
}
