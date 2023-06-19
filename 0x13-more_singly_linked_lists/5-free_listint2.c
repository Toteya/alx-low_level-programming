#include "lists.h"

/**
 * free_listint2 - Free a listint_t and set the head to NULL
 * @head: Double pointer to the first node of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head)
		return;

	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
