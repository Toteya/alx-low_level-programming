#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Address of the head of the list
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		head->prev = NULL;
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
