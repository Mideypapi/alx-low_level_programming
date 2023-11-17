#include <stdio.h>
#include "lists.h"

/**
 * list_len - write d fuction that
 * print number of an element
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
