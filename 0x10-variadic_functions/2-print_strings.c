#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed as arguments
 * @separator: A string to be used as a separator
 * @n: The number of arguments to be printed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < (int) n; i++)
	{
		if (i && separator)
			printf("%s", separator);

		s = (va_arg(ap, char *));
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(ap);
}
