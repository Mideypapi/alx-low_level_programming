#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - write a function
 * that frees a listint_t list.
 * @head: address of the linked list
 *
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
