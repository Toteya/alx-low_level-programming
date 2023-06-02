#include "lists.h"

/**
 * free_list - Frees the memory of linked list
 * @head: Address of the first node
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
