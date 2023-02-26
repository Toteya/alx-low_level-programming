#include <stdio.h>

/**
 * main - Finds and prints the largest prime factors a number
 *
 * Return: 0 Success
 */
int main(void)
{
	long i, j, k;
	long num = 612852475143;
	long lpf;			/* Largest Prime Factor */
	int is_prime;

	lpf = num;
	for (i = 1; i <= num; i++)
	{
		if (num % i != 0)	/* Check if i is a factor of n */
			continue;	/* Only do iterations for factors of n */
		k = num / i;		/* Go with the higher factor to get to the solution faster */
		is_prime = 1;
		for (j = 2; j <= k / 2; j++)	/* Only necessary to iterate up to k/2 */
		{
			if (k % j == 0)
			{
				is_prime = 0;	/* k is not a prime number if we find any factors */
				break;
			}
		}
		if (is_prime)
		{
			lpf = k;
			break;
		}
	}
	printf("%ld\n", lpf);

	return (0);
}
