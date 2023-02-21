#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The whose sign is to be printed
 *
 * Return: If n is positive 1. If n is negative -1. Otherwise 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
