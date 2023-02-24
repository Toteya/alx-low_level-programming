#include <stdio.h>

/**
 * main - Fizz Buzz, 1 to 100, multiples of 3 and 5
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i - 1)
			printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Fizz Buzz");
		else
			printf("%d", i);
	}
	printf("\n");

	return (0);
}
