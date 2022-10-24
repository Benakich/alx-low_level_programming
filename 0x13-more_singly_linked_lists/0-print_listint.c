#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - fn that prints all elements of a listint_t list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
