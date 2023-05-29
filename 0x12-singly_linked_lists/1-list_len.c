#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t
 *
 * Return
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h-> next;
	}
	return (n);
}
