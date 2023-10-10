#include "search_algos.h"
#include <math.h>

int linear_srch(int *array, size_t lower, size_t upper, int value);

/**
 * jump_search - Searches a sort array using the JUMP SEARCH algorithm
 * @array: Pointer to the array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 * Return: The index where the value is located. Otherwise return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, k = 0, i, low, up;

	if (!array)
		return (-1);
	step = sqrt(size);
	while (1)
	{
		i = k * step;
		if (i >= size || value <= array[i])
		{
			if (!k)
				return (-1);
			low = (k - 1) * step;
			up = i;
			if (i >= size)
				up = size - 1;
			printf("Value found between indexes [%lu] and [%lu]\n", low, i);
			return (linear_srch(array, low, up, value));
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		k++;
	}
	return (-1);
}

/**
 * linear_srch - performs a linear search on a subarray
 * @array: The array to be searched
 * @lower: The lower bound of the subarray
 * @upper: The upper bound of the subarray
 * @value: The value to search for
 * Return: The index where the value is located. Otherwise return -1.
 */
int linear_srch(int *array, size_t lower, size_t upper, int value)
{
	size_t i;


	for (i = lower; i <= upper; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}






