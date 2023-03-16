#include "main.h"

/**
 * array_range - Creates an array of integer for the given range
 * @min: The minimum value for the range of integers
 * @max: The maximum value for the range of integers
 *
 * Return: Pointer to the address of the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	size = max - min + 1;
	if (size <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
