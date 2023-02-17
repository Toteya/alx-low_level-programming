#include <stdio.h>

/**
 * main - Print every possible combination of two 2-digit numbers
 *
 * Return: Always
 */
int main(void)
{
	int a, b;
	int x, y;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			x = a / 10;
			y = a % 10;
			putchar(x + '0');
			putchar(y + '0');
			putchar(' ');

			x = b / 10;
			y = b % 10;
			putchar(x + '0');
			putchar(y + '0');
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
