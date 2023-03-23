#include "variadic_functions.h"

/**
 * print_all - Prints any number arguments
 * @format: format of the arguments to be printed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, skip = 0;
	char *s;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				skip = 1;
				break;
		}
		if (!skip && format[i + 1] != '\0')
			printf(", ");
		i++;
		skip = 0;
	}
	printf("\n");
	va_end(ap);
}
