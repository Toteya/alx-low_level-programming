#include <stdio.h>

/**
 * main - Prints the sum of all the fibonacci terms below 4,000,000
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
	int a = 0, b = 1, c, sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		sum += c;
	}
	printf("%u\n", sum);
	return (0);
}

