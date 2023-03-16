#include "main.h"

/**
 * string_nconcat - Concatenates two strings to a new string
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: Number of bytes of s2 to be concatenated
 * Return: Pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len = 1;
	char *str = NULL;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			len++;
	}

	if (s2)
	{
		for (i = 0; s2[i] != '\0' && n; i++)
		{
			len++;
			n--;
		}
	}

	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);

	for (i = 0; i < len - 1; i++)
	{
		if (*s1 != '\0')
			str[i] = *s1++;
		else
			str[i] = *s2++;
	}
	str[i] = '\0';
	return (str);
}
