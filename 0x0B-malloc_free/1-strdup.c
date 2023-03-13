#include "main.h"

/**
 * _strdup - Allocates memory and copies into it a given string
 * @str: The string to be copied
 *
 * Return: Pointer to the new string.
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++, str++)
	{
		s[i] = *str;
	}
	return (s);
}
