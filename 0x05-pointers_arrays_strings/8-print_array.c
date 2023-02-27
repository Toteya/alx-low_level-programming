#include "main.h"

/**
 * print_array - Prints the given number of elements of an array
 * @a: Pointer to the first element of the array
 * @n: The number of elements to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
