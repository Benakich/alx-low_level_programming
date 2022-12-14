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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__((constructor)) before_main(void);


#endif
