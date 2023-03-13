#include "main.h"

/**
 * create_array - Creates an array and intialises it with a given char.
 * @size: The size of the array
 * @c: The characterter to fill the array
 *
 * Return: A pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
