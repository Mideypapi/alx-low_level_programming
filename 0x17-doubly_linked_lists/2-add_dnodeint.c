#include "lists.h"

/**
 * add_dnodeint - adds a new node at d beginning of list in a dlistint_t.
 *
 * @head: pointer to the first element of d list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
