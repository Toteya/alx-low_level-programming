#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t
 * @h: Pointer to the first node of the linked list
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
