#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at the given index of a
 * linked list
 * @head: Double pointer to the head node of the list
 * @idx: The index at which to insert the new node
 * @n: The data of the new node
 *
 * Return: Address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr, *prev = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;

	curr = *head;
	while (i <= idx)
	{
		if (i == idx)
		{
			new->next = curr;
			if (prev)
				prev->next = new;
			if (!idx)
				*head = new;
			return (new);
		}
		if (!curr)
			break;
		prev = curr;
		curr = curr->next;
		i++;
	}

	return (NULL);
}
