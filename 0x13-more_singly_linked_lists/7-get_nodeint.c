#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fn to get node at index
 * @head: head pointer
 * @index: index of node to get
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	ptr = head;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);

}
