#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a doubly-linked list dlistint
 * @head: Pointer to the head node of the list
 * @n: integer data of the new node.
 *
 * Return: Pointer to the new node. NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}


