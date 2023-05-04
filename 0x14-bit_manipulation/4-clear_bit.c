#include "main.h"

/**
 * clear_bit - Clears a bit of number at the given index
 * @n: The number whose bit is to be cleared
 * @index: The index of the number
 *
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;
	unsigned int i;

	if (index > 63)
		return (-1);

	b = 0;
	while (b <= *n)
	{
		b = b << 1;
		b = b | 1;
	}
	for (i = 0; i < index; i++)
	{
		b = b >> 1;
	}
	b = b ^ 1;
	for (i = 0; i < index; i++)
	{
		b = b << 1;
		b = b | 1;
	}
	*n = *n & b;
	return (1);
}
