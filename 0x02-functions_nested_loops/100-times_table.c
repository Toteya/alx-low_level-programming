#include "main.h"

/**
 * print_times_table - Prints the times table of any given number n
 * @n: The number whose times table is to be printed
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (j)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (x < 100)
				{
					_putchar(' ');
					_putchar(x / 10 + '0');
				}
				else
				{
					_putchar(x / 100 + '0');
					_putchar((x / 10) % 10 + '0');
				}
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
