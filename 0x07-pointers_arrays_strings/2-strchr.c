#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string in which to search for the given character
 * @c: The character to search for in s
 *
 * Return: Pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}
