#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - fn to return the number of elements in a linked list
 * @h: head pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
