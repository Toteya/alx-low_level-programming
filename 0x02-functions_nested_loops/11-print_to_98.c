#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers (integers) up to 98
 * @n: The number from which to start printing
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
}
