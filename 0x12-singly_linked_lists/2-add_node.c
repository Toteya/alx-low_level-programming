#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a linked list list_t
 * @head: Pointer to the first node (head) of the linked list
 * @str: The string to entered in the new element
 *
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		new->str = strdup(str);
		if (str == NULL)
			return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
