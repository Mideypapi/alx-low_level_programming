#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - write a function
 * that frees a listint_t list.
 * @head: pointer to a linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
