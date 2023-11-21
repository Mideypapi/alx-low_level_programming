#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - write a function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to the begin of the lincked list
 *
 * Return: data that was in the node
 */

int pop_listint(listint_t **head)
{
	int data_check = 0;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	data_check = tmp->n;
	*head = tmp->next;
	if (tmp != NULL)
	{
		free(tmp);
		return (data_check);
	}
	return (data_check);
}
