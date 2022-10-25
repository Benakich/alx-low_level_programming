#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fn to free list
 * @head: list head pointer
 */

void free_listint(listint_t *head)
{
	listint_t *del;

	while (head)
	{
		del = head;
		head = head->next;
		free(del);
	}
}
