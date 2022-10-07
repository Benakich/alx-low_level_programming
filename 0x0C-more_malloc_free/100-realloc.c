#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - fn that reallocates a memory block using malloc and free
 *
 * @ptr: void pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the memory block
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p, *pp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	pp = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = pp[i];
	free(ptr);

	return (p);

}
