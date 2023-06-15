#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the given index of a doubly
 * linked list dlistint_t.
 * @h: Double pointer to the head of the list
 * @idx: The index where to insert the node
 * @n: Integer data of the new node
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *curr, *prev;

	new = malloc(sizeof(dlistint_t));
	if (!new && !h)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	curr = *h;
	prev = NULL;

	if (!curr)
		*h = new;

	while (curr && i <= idx)
	{
		if (i == idx)
		{
			new->next = curr;
			curr->prev = new;
			new->prev = prev;
			if (prev)
				prev->next = new;
			return (new);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	return (NULL);
}
