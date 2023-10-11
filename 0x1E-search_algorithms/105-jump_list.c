#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: The list (listint_t) to be searched
 * @size: The size of the list
 * @value: The value to be searched for
 * Return: A pointer to the first node where value is located. Otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, k = 0;
	listint_t *hi, *lo;
	char *str;

	if (!list)
		return (NULL);

	step = sqrt(size);
	hi = list;
	lo = hi;

	while (lo != NULL && lo->index <= hi->index)
	{
		k = k + step;
		lo = hi;
		while (hi->index < k && hi->next != NULL)
		{
			hi = hi->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", hi->index, hi->n);
		if (value > hi->n && hi->next != NULL)
			continue;
		str = "Value found between indexes";
		printf("%s [%lu] and [%lu]\n", str, lo->index, hi->index);
		while (lo != NULL && lo->index <= hi->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", lo->index, lo->n);
			if (value == lo->n)
				return (lo);
			lo = lo->next;
		}
	}
	return (NULL);
}






