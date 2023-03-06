#include "main.h"

/**
 * _strpbrk - Searches a string for any byte from a given set of bytes
 * @s: The string in which to search for the given bytes
 * @accept: A string of accepted bytes to be searched for in s
 * Return: Pointer to the first occurence of a byte in s from accept
 *
 * Description: The _strpbrk() function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

