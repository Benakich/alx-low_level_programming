#include <stdio.h>

/**
 * int_index - fn that searches for an integer
 * @array: array of pointers to int
 * @size: number of elements in the array
 * @cmp: is a pointer to the funtion to be used to compare values
 *
 * Return: int index of the first element for
 * which the cmp fn does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
