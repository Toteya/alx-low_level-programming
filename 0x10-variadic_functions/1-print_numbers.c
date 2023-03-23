#include "variadic_functions.h"

/**
 * print_numbers - Prints the integers passed as arguments
 * @separator: A string to be used as a separator
 * @n: The number of arguments passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (!separator)
		return;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		if (i)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
