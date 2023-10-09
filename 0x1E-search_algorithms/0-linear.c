#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear Search Algorithm
 * @array: Pointer to the array to be searched
 * @size: The size of the array
 * @value: The value to search for
 * Return: First index where the value is located. Otherwise return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
