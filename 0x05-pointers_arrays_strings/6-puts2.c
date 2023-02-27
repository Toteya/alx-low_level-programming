#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
			if (*(str + 1) == '\0')
				break;
		str = str + 2;
	}
	_putchar('\n');
}
