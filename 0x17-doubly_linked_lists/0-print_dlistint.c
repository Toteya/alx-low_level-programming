#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly-linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
