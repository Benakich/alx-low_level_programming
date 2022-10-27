#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_node_loop - finds a loop in a linked list
 * @head: head pointer
 * Return: address of noder where loop start
 */

listint_t *find_node_loop(listint_t *head)
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
 * print_listint_safe - fn to print a linked list
 * @head: head pointer
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	int loop;
	listint_t *node_loop;

	node_loop = find_node_loop((listint_t *) head);

	for (count = 0, loop = 1; (head != node_loop || loop) && head != NULL;)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == node_loop)
			loop = 0;
		head = head->next;
		count++;
	}

	if (node_loop != NULL)
		printf("-> [%p] %i\n", (void *) head, head->n);

	return (count);

}
