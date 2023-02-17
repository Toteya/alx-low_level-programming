#include <stdio.h>

/**
 * main - Print number 0 to 9 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
