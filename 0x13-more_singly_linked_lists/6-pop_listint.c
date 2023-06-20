#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head node
 *
 * Return: The head nodes data (n). Otherwise return 0 if the list is empty..
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n = 0;

	while (head && *head)
	{
		p = *head;
		*head = (*head)->next;
		n = p->n;
		free(p);
		return (n);
	}
	return (n);
}
