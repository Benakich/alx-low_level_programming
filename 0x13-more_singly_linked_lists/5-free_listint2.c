#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - fn to free list, sets head to NULL
 * @head: list head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *del;

	if (head == NULL)
		return;

	while (*head)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
	}
	head = NULL;
}
