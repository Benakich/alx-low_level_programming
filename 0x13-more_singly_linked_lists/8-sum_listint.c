#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - fn that returns sum of all the data(n) of a linked list
 * @head: head pointer
 * Return: sum of int data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
