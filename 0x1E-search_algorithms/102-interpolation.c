#include "search_algos.h"

/**
 * interpolation_search - Search a sorted array using interpolation search
 * algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index where the value is located. Otherwise return -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, up;

	if (!array)
		return (-1);

	up = size - 1;
	low = 0;

	while (up > low) /* fix for one element array */
	{
		i = low + (value - array[low]) * (up - low) / (array[up] - array[low]);
		if (i < low || i > up)
		{
			printf("Value checked array[%lu] is out of range\n", i);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value > array[i])
			low = i + 1;
		else if (value < array[i])
			up = i - 1;
		else
			return (i);
	}
	return (-1);
}
