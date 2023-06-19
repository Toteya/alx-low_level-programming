#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list listint_t
 * @h: Pointer to the first node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
