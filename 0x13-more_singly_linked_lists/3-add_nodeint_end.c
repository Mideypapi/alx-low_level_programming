#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - write a function that adds
 * a new node at the end of a listint_t list.
 * @head: address of the last node
 * @n: value to insert at the end of the list
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *newNode;
	listint_t *last;

	newNode = malloc(sizeof(listint_t));
	last = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = newNode;
	return (newNode);
}
