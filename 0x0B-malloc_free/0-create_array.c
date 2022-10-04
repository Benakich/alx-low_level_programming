#include "main.h"
#include <stdlib.h>

/**
* create_array - fn to create an array
* @size: size of array
* @c: char to initialise with
*
* Return: NULL if size = 0, otherwise char
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *A = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
