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
	void **p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);




}
