#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the elements' data of a dlistint_t
 * @head: Pointer to the first node of the list
 *
 * Return: Sum of all elements' data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
