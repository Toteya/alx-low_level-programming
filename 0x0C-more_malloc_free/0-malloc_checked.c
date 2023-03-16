#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: Pointer to the allocated memeory address
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory of size b */
	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
