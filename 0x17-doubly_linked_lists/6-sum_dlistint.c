#include "lists.h"

/**
 * sum_dlistint - returns d sum of all d data (n) of a dlistint_t.
 *
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int count = 0;

	while (node)
	{
		count += node->n;
		node = node->next;
	}

	return (count);
}
