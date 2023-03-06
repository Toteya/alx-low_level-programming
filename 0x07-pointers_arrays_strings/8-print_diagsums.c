#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a 2-dimensional array
 * @a: pointer to the first element of the 2-d array
 * @size: dimensions of the 2-d array
 *
 * Return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); )
	{
		sum1 += a[i];
		i += size + 1;
	}
	for (i = size - 1; i < (size * size) - 1; )
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
