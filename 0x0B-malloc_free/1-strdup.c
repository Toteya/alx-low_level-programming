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
	int i;

	s = malloc(sizeof(char) * strlen(str) + 1);
	if (s == NULL || str == NULL)
		return (NULL);

	for (i = 0; *str != '\0'; i++, str++)
	{
		s[i] = *str;
	}
	return (s);
}
