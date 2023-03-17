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
	unsigned int i, size;
	void *n_ptr = NULL;
	char *p;

	if (!ptr)
	{
		n_ptr = malloc(new_size);
		return (n_ptr);
	}

	p = ptr;
	if (new_size == old_size)
		return (ptr);

	size = (new_size < old_size) ? old_size : new_size;
	n_ptr = malloc(size);
	if (!n_ptr)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		((char *)n_ptr)[i] = *p;
		p++;
	}
	free(ptr);
	return (n_ptr);
}
