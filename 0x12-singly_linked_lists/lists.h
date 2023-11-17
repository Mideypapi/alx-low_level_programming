#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - functions for singly linked list
 * @str: string - string having malloc
 * @len: length of the string checked
 * @next: points to the next node on the singly list
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
