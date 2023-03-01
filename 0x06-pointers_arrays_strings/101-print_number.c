#include "main.h"

/**
 * print_number - Prints an integer with _putchar
 * @n: The integer to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	int i;
	int print = 0;
	int num;
	int D = 1000000000;
	int sign = 1;

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
	}

	for (i = 0; D > 0; i++)
	{
		num = sign * (n / D);
		if (num)
			print = 1;

		if (print || D == 1)
		{
			_putchar(num + '0');
			n = n % D;
		}
		D /= 10;
	}
}
