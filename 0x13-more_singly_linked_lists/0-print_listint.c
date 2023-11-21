#include <stdio.h>
#include "lists.h"

/**
 * print_listint - write a function that
 * prints all the elments of a listint_t list.
 * @h: number of elements
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num  = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
		}
	return (num);
}
