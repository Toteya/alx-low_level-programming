#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the screen
 * @n: The length of the line
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j != i)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	if (!n)
		_putchar('\n');
}
