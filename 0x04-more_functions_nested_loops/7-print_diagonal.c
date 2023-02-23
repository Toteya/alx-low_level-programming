#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the screen
 * @n: The length of the line
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	do {
		while (j < i + 1 && i)
		{
			if (j != i)
				_putchar(' ');
			else
				_putchar('\\');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;	
	} while (i < n);
}
