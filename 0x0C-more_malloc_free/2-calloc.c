#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr = NULL;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i * size] = 0x00;
	}
	return (ptr);
}
