#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list_t
 * @head: Pointer to the first node of the linked list
 * @str: String value of the new node
 *
 * Return: Address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *ptr;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (ptr == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
