#ifndef LISTS_H
#define LISTS_H

/**
 * struct node - struct node for singly linked list
 * @str: string data element of struct node
 * @len: int data element of struct node
 * @next: pointer to next node
 */

typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);

#endif
