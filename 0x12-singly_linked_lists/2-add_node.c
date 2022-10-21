#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - fn that adds a new node at the beginning of a list_t list
 * @head: pointer to first node of list_t
 * @str: data to be duplicated
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int count;

	for (count = 0; str[count] != '\0'; count++)
		;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = count;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
