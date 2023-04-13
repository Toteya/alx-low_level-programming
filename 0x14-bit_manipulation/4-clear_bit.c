#include "main.h"

/**
 * clear_bit - Sets a bit of number at the given index to zero
 * @n: The number whose bit is to be set
 * @index: The index of the bit
 *
 * Return: If successful 1. Otherwise return 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x, b = 1;

	x = *n;
	while (b <= x)
	{
		x = x | b;
		b = (b << 1) + 1;
	}
	b = 1;
	while (index)
	{
		b = b << 1;
		index--;
	}
	x -= (unsigned long int) b;
	*n = *n & x;
	return (1);
}
