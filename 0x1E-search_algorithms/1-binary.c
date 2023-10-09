#include "search_algos.h"

void print_subarray(int *array, size_t lower, size_t upper);

/**
 * binary_search - Searches for a value in a sorted array using the
 * Binary Search Algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index where the value is located. Otherwise return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, upper, lower;

	if (!array)
		return (-1);

	upper = size;
	lower = 0;

	while (lower < upper)
	{
		print_subarray(array, lower, upper);

		i = (lower + upper - 1) / 2;
		if (value > array[i])
		{
			lower = i + 1;
		}
		else if (value < array[i])
		{
			upper = i;
		}
		else
			return (i);
	}
	return (-1);
}

/**
 * print_subarray - Prints a subarray
 * @array: Pointer to the array to be printed
 * @lower: The lower bound of the subarray to be printed
 * @upper: The upper bound to the subarray to be printed
 * Return: Nothing.
 */
void print_subarray(int *array, size_t lower, size_t upper)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lower; i < upper; i++)
	{
		if (i != lower)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
