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
	int i = 0;
	char f, *s;

	while (format)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			f = format[i];
			if (i && (f == 'c' || f == 'i' || f == 'f' || f == 's'))
				printf(", ");
			switch (f)
			{
				case 'c':
					putchar(va_arg(ap, int));
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
					{
						printf("(nil)");
						break;
					}
					printf("%s", s);
					break;
			}
			i++;
		}
		printf("\n");
		va_end(ap);
		break;
	}
}
