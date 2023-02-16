#include <stdio.h>

/**
 * main - Print sizes of various data types
 *
 * Return: Always 0
 */
int main(void)
{
	size_t size_char = sizeof(char);
	size_t size_int = sizeof(int);
	size_t size_lint = sizeof(long int);
	size_t size_llint = sizeof(long long int);
	size_t size_float = sizeof(float);

	printf("Size of a char: %lu byte(s)\n", size_char);
	printf("Size of an int: %lu byte(s)\n", size_int);
	printf("Size of a long int: %lu byte(s)\n", size_lint);
	printf("Size of a long long int: %lu byte(s)\n", size_llint);
	printf("Size of a float: %lu byte(s)\n", size_float);
	return (0);
}
