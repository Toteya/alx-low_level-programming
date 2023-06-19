#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t list
 * @head: Address of the first node of the list
 * @n: Integer data of the new element
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
