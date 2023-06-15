#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a dlistint_t list.
 * @head: Double pointer to the head node of the list
 * @n: Integer data of the new element
 *
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	curr = *head;
	if (!curr)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
