#include "main.h"

/**
 * main - Adds two numbers and prints the result
 * @argc: Number of arguments to main
 * @argv: Array of command line arguments to main
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
