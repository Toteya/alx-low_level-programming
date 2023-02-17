#include <stdio.h>

/**
 * main - Prints numbers in base 16, 0 to f.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0x0; num <= 0xf; num++)
	{
		if (num <= 0x9)
			putchar(num + '0');
		else
			putchar(num + 'a' - 0xa);
	}
	putchar('\n');
	return (0);
}
