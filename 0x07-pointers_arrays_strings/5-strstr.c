#include "main.h"

/**
 * _strstr - Finds the first occurence of a given substring in a string
 * @haystack: The string in which to search
 * @needle: The substring to search for in the string haystack
 *
 * Return: Pointer to the first occurence of the substring needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int found = 0;
	char *p = NULL;

	while (*haystack != '\0' && needle[i] != '\0')
	{
		if (*haystack != needle[i])
		{
			found = 0;
			i = 0;
			p = NULL;
		}
		if (*haystack == needle[i])
		{
			if (!found)
			{
				p = haystack;
				found = 1;
			}
			i++;
		}
		haystack++;
	}
	if (needle[i] != '\0')
		p = NULL;
	return (p);
}
