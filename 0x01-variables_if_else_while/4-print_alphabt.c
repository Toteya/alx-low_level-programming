#include <stdio.h>

/**
 * main - Prints entire alphabet in lowercase excluding letters q and e
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
