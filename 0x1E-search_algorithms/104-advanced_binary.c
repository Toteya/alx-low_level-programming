#include "search_algos.h"

int ab_search(int *array, size_t lower, size_t upper, int value);
void print_subarray(int *array, size_t lower, size_t upper);
int find_first_match(int *array, size_t index, size_t lower, int value);

/**
 * advanced_binary - Searches for a value in an array using an advanced
 * variation of the binary search algorithm
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to be search for
 * Return: The first index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (ab_search(array, 0, size, value));
}

/**
 * ab_search - Binary searches an subarray of integer
 * @array: The array to be searched
 * @lower: The lower bound of the subarray
 * @upper: The upper bound of the subarray
 * @value: The value to be searched for
 * Return: The index where the value is located. Otherwise return -1.
 */
int ab_search(int *array, size_t lower, size_t upper, int value)
{
	size_t i;

	if (upper <= lower)
		return (-1);
	i = (upper + lower - 1) / 2;

	print_subarray(array, lower, upper);
	if (value == array[i])
	{
		i = find_first_match(array, i, lower, value);
		return (i);
	}
	if (value > array[i])
		lower = i + 1;
	else
		upper = i;
	return (ab_search(array, lower, upper, value));
}

/**
 * find_first_match - Finds the index with the first matching value in an array
 * @array: The array to be searched
 * @index: The current index
 * @lower: The lower bound of the array
 * @value: The value to search for
 * Return: The index where the first match is located
 */
int find_first_match(int *array, size_t index, size_t lower, int value)
{
	if (index > lower && value == array[index - 1])
		return (find_first_match(array, index - 1, lower, value));
	return (index);
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
