#include "search_algos.h"

int bin_search(int *array, size_t lower, size_t upper, int value);
void print_subarray(int *array, size_t lower, size_t upper);

/**
 * exponential_search - Searches for a value in an array using the exponential
 * search algorithm
 * @array: Pointer to the array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 * Return: The index where the value is located. Otherwise return -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, lower, upper;

	if (!array)
		return (-1);


	if (value == array[0])
		return (0);

	i = 1;
	while (1)
	{
		if (i >= size)
			i = size - 1;
		if (i == size - 1 || !(value > array[i]))
		{
			upper = i;
			printf("Value found between indexes [%lu] and [%lu]\n", lower, upper);
			return (bin_search(array, lower, upper, value));
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			lower = i;
			i = i * 2;
		}

	}
	return (-1);
}

/**
 * bin_search - Searches a subarray using binary search
 * @array: The array to be searched
 * @lower: The lower limit of the array
 * @upper: The upper limit of the array
 * @value: The value to search for
 * Return: The index where the value is located. Otherwise return -1.
 */
int bin_search(int *array, size_t lower, size_t upper, int value)
{
	size_t i;

	while (upper + 1 > lower)
	{
		print_subarray(array, lower, upper + 1);
		i = (upper + lower) / 2;
		if (value > array[i])
			lower = i + 1;
		else if (value < array[i])
			upper = i;
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
