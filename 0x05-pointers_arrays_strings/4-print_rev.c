#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
