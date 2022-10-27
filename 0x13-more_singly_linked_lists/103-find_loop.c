#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - fn to find loop in linked list
 *
 * @head: head pointer
 *
 * Return: address of node where loop starts/returns, otherwise  NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *ptr2;

	if (head == NULL)
		return (NULL);
	for (ptr2 = head->next; ptr2 != NULL; ptr2 = ptr2->next)
	{
		if (ptr2 == ptr2->next)
			return (end);
		for (ptr = head; ptr != ptr2; ptr = ptr->next)
			if (ptr == ptr2->next)
				return (ptr2->next);
	}

	return (NULL);
}
