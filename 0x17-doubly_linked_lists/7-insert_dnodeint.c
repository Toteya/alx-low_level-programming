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

	prev = NULL;
	curr = *h;

	if (!curr)
	{
		*h = new;
		return (new);
	}

	do {
		if (i == idx)
		{
			new->next = curr;
			new->prev = prev;
			if (curr)
				curr->prev = new;
			if (prev)
				prev->next = new;
			if (!i)
				*h = new;
			return (new);
		}
		prev = curr;
		curr = curr->next;
		i++;
	} while (curr && i <= idx);

	return (NULL);
}
