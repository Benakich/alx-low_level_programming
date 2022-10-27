#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_node_loop2 - finds a loop in a linked list
 * @head: head pointer
 * Return: address of noder where loop start
 */

listint_t *find_node_loop2(listint_t *head)
{
	listint_t *ptr, *ptr2;

	if (head == NULL)
		return (NULL);

	for (ptr2 = head->next; ptr2 != NULL;  ptr2 = ptr2->next)
	{
		if (ptr2 == ptr2->next)
			return (ptr2);
		for (ptr = head; ptr != ptr2; ptr = ptr->next)
			if (ptr == ptr2->next)
				return (ptr2->next);
	}
	return (NULL);

}


/**
 * free_listint_safe - fn to free a linked list with loop
 * @h: head pointer
 * Return: the number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count;
	int loop = 1;
	listint_t *node_loop, *next;

	if (h == NULL || *h == NULL)
		return (0);
	node_loop = find_node_loop2(*h);

	for (count = 0; (*h != node_loop || loop) && *h != NULL; *h = next)
	{
		count++;
		next = (*h)->next;
		if (*h == node_loop && loop)
		{
			if (node_loop == node_loop->next)
			{
				free(*h);
				break;
			}
			count++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (count);

}
