#include "3-calc.h"

/**
 * main - Performs simple mathematical operations on two integers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 if successful.
 * Otherwise if unsuccesful, 98 (Invalid number of arguments),
 * 99 (Invalid operator) or 100 (divide by zero)
 */
int main(int argc, char *argv[])
{
	int x, y, result;
	char op = *(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		return (99);
	}
	if ((op == '/' || op == '%') && y == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(x, y);
	printf("%d\n", result);
	return (0);
}
