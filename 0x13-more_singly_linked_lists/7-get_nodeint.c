#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the given index of a linked list
 * @head: Address of the head node of the list
 * @index: The index of the node to be returned
 *
 * Return: Address of the node. Otherwise return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;

	while (p && index > 0)
	{
		p = p->next;
		index--;
	}
	if (!p || index)
		return (NULL);

	return (p);
}
