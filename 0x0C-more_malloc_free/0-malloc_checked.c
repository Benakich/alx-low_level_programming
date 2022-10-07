#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fn that allocates memory using malloc
 *
 * @b: memory size input
 * Return: coid pointer to memory allocation
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
