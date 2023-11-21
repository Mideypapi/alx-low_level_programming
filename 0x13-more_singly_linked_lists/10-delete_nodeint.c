#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - write a function that
 * delte the node at index of a listint_t linked list.
 * @head: pointer to beggin
 * @index: indicate the node that shold be deleted
 *
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 1;
	listint_t *tmp;
	listint_t *eraser;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (num != index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		num++;
	}
	eraser = tmp->next->next;
	free(tmp->next);
	tmp->next = eraser;
	return (1);
}
