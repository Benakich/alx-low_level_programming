#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - fn that deletes a node at a given position
 * @idx: index to add node
 * @head: head pointer
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;

	prev = ptr = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}

	while (index != 0)
	{
		if (ptr->next == NULL)
			return (-1);
		prev = ptr;
		ptr = ptr->next;
		index--;
	}
	prev->next = ptr->next;
	free(ptr);
	ptr = NULL;

	return (1);
}
