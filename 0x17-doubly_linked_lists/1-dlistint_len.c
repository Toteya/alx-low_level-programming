#include "lists.h"

/**
 * dlistint_len - Finds the length (number of nodes) of a doubly linked
 * list dlistint.
 * @h: The head node of the linked list
 *
 * Return: Number of number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
