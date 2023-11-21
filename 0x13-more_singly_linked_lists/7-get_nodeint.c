#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - write a function that
 * returns the nth node of a listint_t linked list.
 *
 * @head: pointer of the lincked list
 * @index: index of the node starting in 0
 *
 * Return: value in the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (num == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		num++;
	}
	return (NULL);
}
