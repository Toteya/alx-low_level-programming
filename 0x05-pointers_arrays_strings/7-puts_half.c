#include "main.h"

/**
 * puts_half - Prints only the second half of string
 * @str: The string to be printed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	for (j = i / 2 + i % 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
