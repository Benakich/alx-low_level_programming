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
	int count = 0;

	ptr = h;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	count += 1;

	return (count);
}
