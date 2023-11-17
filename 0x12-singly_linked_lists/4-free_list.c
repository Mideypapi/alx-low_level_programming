#include <stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 *
 * @head: head
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
