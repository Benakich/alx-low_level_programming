#include <stdio.h>

/**
 * array_iterator - fn that executes a function given as
 * a parameter on each element of an array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * @array: array of pointer to int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
