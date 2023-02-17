#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - Print last digit of a random number n
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("Last digit of %d is %d and ", n, lastdigit);
	if (abs(lastdigit) > 5)
		printf("is greater than 5\n");
	else if (abs(lastdigit) == 0)
		printf("is 0\n");
	else
		printf("is less than 6\n");
	return (0);
}
