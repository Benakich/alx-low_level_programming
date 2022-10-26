#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - fn to print a linked list
 * @head: head pointer
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *current;
	size_t count;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		ptr = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *) ptr, ptr->n);

		if (ptr < current)
		{
			printf("-> [%p] %d\n", (void *) current, current->n);
			break;
		}
	}

	return (count);
}
