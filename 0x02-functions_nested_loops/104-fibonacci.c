#include <stdio.h>

/**
 * main - Prints the first 100 terms of the Fibonacci sequence
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;
	const unsigned long int MAX = 1000000000000000000;
	/* integer variables to be used to generate the Fibonacci sequence */
	unsigned long int a = 0, b = 1, c;
	/* variables to habdle (carry) extra digits to avoid overflow */
	int carry_a = 0, carry_b = 0, carry_c;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		carry_c = carry_a + carry_b;
		if (c > MAX)
		{
			carry_c++;
			c = c % MAX;
		}
		a = b;
		b = c;
		carry_a = carry_b;
		carry_b = carry_c;

		if (i)
			printf(", ");
		if (carry_c)
			printf("%d", carry_c);
		printf("%ld", c);
	}
	printf("\n");
	return (0);
}

