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
	int ready = 0;

	num = n;
	while (D > 0)
	{
		num = num / D;
		printf("num: %d, n: %d, D: %d\n", num, n, D);
		if (num)
			ready = 1;
		if (ready)
		{
			_putchar(num + '0');
		}
		num = n - n % D;
		D = D / 10;
	}
}
