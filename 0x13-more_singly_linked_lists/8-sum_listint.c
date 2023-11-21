#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - write a function that
 * returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to begin of the lincked list
 *
 * Return: sum of all datas
 */

int sum_listint(listint_t *head)
{
	int sum_n = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		sum_n += tmp->n;
		tmp = tmp->next;
	}
	sum_n += tmp->n;
	return (sum_n);
}
