#include <stdio.h>
#include "lists.h"

/**
 * list_len - fn that prints all elements of a list_t list
 * @h: list_t pointer
 * Return: size_t type
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
