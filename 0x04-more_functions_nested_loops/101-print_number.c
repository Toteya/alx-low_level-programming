#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int D = 1000000000;
	int num;
	int ready = 0, sign = 1;

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
	}
	while (D > 0)
	{
		num = n / D;
		if (num)
			ready = 1;
		if (ready || D <= 1)
		{
			_putchar(sign * num + '0');
			n = n % D;
		}
		D = D / 10;
	}
}
