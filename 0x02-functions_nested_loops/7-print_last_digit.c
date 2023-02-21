#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
