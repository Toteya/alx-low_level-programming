#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 *
 * Return: Pointer to memory containing the new string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len = 1;
	char *s = NULL;

	if (s1)
		len += strlen(s1);
	if (s2)
		len += strlen(s2);

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	if (s1)
	{
		for (; *s1 != '\0'; i++, s1++)
		{
			s[i] = *s1;
		}
	}
	if (s2)
	{
		for (; *s2 != '\0'; i++, s2++)
		{
			s[i] = *s2;
		}
	}

	s[i] = '\0';
	return (s);
}
