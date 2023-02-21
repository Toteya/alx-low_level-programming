#include <stdio.h>

/**
 * main - Prints the first 100 terms of the Fibonacci sequence
 *
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i;
	/* integer variables to be used to generate the Fibonacci sequence */
	unsigned long int a = 0, b = 1, c;

	for (i = 0; i < 100; i++)
	{
		c = a + b;
		if (i)
			printf(", ");
		printf("%lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return(0);
}


