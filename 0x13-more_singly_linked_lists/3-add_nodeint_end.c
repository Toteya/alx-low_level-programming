#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list listint_t
 * @head: Double pointer to the first node of the list
 * @n: Integer data of the new element
 *
 * Return: Address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	p = *head;
	if (!p)
	{
		*head = new;
		return (new);
	}

	while (p->next)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
