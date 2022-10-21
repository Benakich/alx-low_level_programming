#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - fn that adds a new node at the end of a list_t list
 * @head: pointer to first node of list_t
 * @str: data to be duplicated
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;
	unsigned int c;

	for (c = 0; str[c] != '\0'; c++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = c;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);

}
