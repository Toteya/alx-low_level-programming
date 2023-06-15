#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at the given index of a dlistint_t
 * list.
 * @head: Pointer to the head node of the list
 * @index: Index of the node to be returned
 *
 * Return: Address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr_node;

	curr_node = head;
	while (curr_node && i <= index)
	{
		if (i == index)
		{
			return (curr_node);
		}
		curr_node = curr_node->next;
		i++;
	}
	return (NULL);
}
