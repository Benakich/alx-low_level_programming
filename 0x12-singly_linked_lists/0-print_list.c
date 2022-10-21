#include "lists.h"
#include <stdio.h>

/**
 * print_list - fn that print elements of list_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *a;
	size_t b;

	b = 0;
	a = h;
	while (a != NULL)
	{
		printf("[%d]%s\n", a->len, a->str);
		a = a->next;
		b++;
	}

	return (b);
}
