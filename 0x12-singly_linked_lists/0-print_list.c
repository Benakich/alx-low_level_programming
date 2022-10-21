#include <stdio.h>
#include "lists.h"

/**
 * print_list - fn that prints all elements of a list_t list
 * @h: list_t pointer
 * Return: size_t type
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
