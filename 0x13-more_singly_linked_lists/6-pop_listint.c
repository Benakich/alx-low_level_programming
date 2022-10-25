#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - fn to delete the head node of a list
 * @head: pointer to head node
 * Return: return head node data n
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int m;

	if (*head == NULL)
		return (0);

	del = (*head)->next;
	m = (*head)->n;
	free(*head);

	*head = del;
	return (m);
}

