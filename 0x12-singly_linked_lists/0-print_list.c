#include <stdio.h>
#include "lists.h"

/**
 * print_list - writes the functn print all the elements
 * @h: position of the singly linked
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h)
		{
		if (h[0].str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h[0].len, h[0].str);
		h = h->next;
		num++;
		}
	return (num);
}
