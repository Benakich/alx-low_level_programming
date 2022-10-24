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
	int count = 0;

	ptr = h;

	if (ptr == NULL)
		return (NULL);
	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	printf("%d\n", ptr->n);
	count += 1;

	return (count);
}
