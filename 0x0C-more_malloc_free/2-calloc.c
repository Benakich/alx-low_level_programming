#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - fn that allocates memory for an array
 *
 * @nmemb: number of elements in array
 * @size: size of the array
 *
 * Return: void pointer to memory allocation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_alloc;
	char *holder;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_alloc = malloc(size * nmemb);

	if (mem_alloc == NULL)
		return (NULL);

	holder = mem_alloc;

	for (i = 0; i < (size * nmemb); i++)
		holder[i] = '\0';

	return (mem_alloc);
}
