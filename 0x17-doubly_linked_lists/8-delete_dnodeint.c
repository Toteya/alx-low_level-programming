#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the given index of a doubly-
 * linked list dlistint_t.
 * @head: Pointer to the head node of the list
 * @index: of the node to be deleted
 *
 * Return: 1 on success. -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr;

	if (!head)
		return (-1);

	curr = *head;
	while (curr && i <= index)
	{
		if (i == index)
		{
			if (curr->prev)
				(curr->prev)->next = curr->next;
			if (curr->next)
				(curr->next)->prev = curr->prev;
			if (!i)
				*head = curr->next;
			free(curr);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
