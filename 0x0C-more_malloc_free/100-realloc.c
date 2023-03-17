#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size in bytes of allocated space for ptr
 * @new_size: The new size in bytes for the new memory block
 * Return: Pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min;
	void *n_ptr = NULL;
	char *p;

	if (!ptr)
	{
		n_ptr = malloc(new_size);
		return (n_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	min = (new_size < old_size) ? new_size : old_size;
	n_ptr = malloc(new_size);
	if (!n_ptr)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	for (i = 0; i < min; i++)
	{
		((char *)n_ptr)[i] = *p;
		p++;
	}
	free(ptr);
	return (n_ptr);
}
