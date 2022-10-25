#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - fn to inserts a node at a given position
 * @idx: index to add node
 * @head: head pointer
 * @n: data
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	new_node->n = n;

	idx--;
	if (idx == 0)
	{
		new_node->next = (*head)->next;
		*head = new_node;
	}
	while (idx != 0)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
		idx--;

	}
	new_node->next = (ptr)->next;
	(ptr)->next = new_node;

	return (new_node);
}
