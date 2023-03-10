#include "main.h"

/**
 * main - Prints all the command line arguments to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
