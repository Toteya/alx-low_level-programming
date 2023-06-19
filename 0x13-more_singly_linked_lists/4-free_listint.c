#include "lists.h"

/**
 * free_listint - Frees a linked list listint_t
 * @head: Pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
