#include "lists.h"

/**
 * sum_listint - Returns the sum of the data of a linked listint_t
 * @head: Pointer to the head node of the list
 *
 * Return: The sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
