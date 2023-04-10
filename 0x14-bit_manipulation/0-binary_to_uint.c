#include "main.h"

/**
 * binary_to_uint - Converts a string representing binary number
 * to an unsigned int
 * @b: The binary number to be converted
 *
 * Return: The converted integer if successful, otherwise return 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	for (i = 0; b && b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		num = num << 1;
		num += b[i] - '0';
	}
	return (num);
}
