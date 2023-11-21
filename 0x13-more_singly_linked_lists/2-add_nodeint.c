#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - write a function that adds
 * a new node at the beginnning of a listint_t list.
 * @head: address of the head
 * @n: value of the first node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
