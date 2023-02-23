#include "main.h"

/**
 * print_line - Prints a line on the screen
 * @n: Length of the line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
