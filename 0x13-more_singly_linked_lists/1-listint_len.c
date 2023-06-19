#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a listint_t list
 * @h: Address of the first node in the list
 *
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
