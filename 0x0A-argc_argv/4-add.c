#include "main.h"

/**
 * is_numeric - Checks if a string is made up entirely of numeric characters
 * @s: The string to be checked
 *
 * Return: 1 if s is entirely numeric. Otherwise return 0.
 */
int is_numeric(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Adds two numbers and prints the result
 * @argc: Number of arguments to main
 * @argv: Array of command line arguments to main
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!is_numeric(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
