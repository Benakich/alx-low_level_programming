#include "lists.h"

/**
 * list_len - returns element count in a linked list
 * @h: head
 * Return: element count
 */

size_t list_len(const list_h *h)
{
	const list_t *a;
	size_t b;

	b = 0;
	a = h;

	while (current != NULL)
	{
		a = a->next;
		b++;
	}

	return (b);


}
