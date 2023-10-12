#include "search_algos.h"
#include <math.h>

void create_express_lane(skiplist_t *list);

/**
 * linear_skip - Searches for a value in list of integers
 * @list: The list to be searched
 * @value: The value to be searched for
 * Return: A pointer to the first node where the value is located.
 * Otherwise return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *express;
	char *str;

	if (!list)
		return (NULL);

	create_express_lane(list);
	node = list;
	express = node->express;
	while (node && node->index < express->index)
	{
		if (express->next)
		{
			str = "Value checked at index";
			printf("%s [%lu] = [%d]\n", str, express->index, express->n);
		}
		if (value > express->n && express->next)
		{
			node = express;
			express = node->express;
			continue;
		}
		str = "Value found between indexes";
		printf("%s [%lu] and [%lu]\n", str, node->index, express->index);
		while (node && node->index <= express->index)
		{
			str = "Value checked at index";
			printf("%s [%lu] = [%d]\n", str, node->index, node->n);
			if (value == node->n)
				return (node);
			node = node->next;
		}
	}
	return (NULL);
}
/**
 * create_express_lane - Creates an express line for a list
 * @list: The list to create the express lane for
 * Return: Nothing.
 */
void create_express_lane(skiplist_t *list)
{
	skiplist_t *node, *express;
	size_t size = 0, step, k;

	node = list;
	while (node)
	{
		size++;
		node = node->next;
	}

	step = sqrt(size);

	node = list;
	while (node)
	{
		express = node;
		for (k = 0; k < step && express->next; k++)
		{
			express = express->next;
		}
		for (k = 0; k < step && node; k++)
		{
			node->express = express;
			node = node->next;
		}
	}
}
