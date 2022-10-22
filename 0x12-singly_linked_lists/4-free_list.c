#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fn that frees list
 * @head: list_t pointer
 */

void free_list(list_t *head)
{
	list_t *ptr;
	list_t *del;

	del = head;

	while (del != NULL)
	{
		ptr = del->next;
		free(del->str);
		free(del);
		del = ptr;
	}
}
