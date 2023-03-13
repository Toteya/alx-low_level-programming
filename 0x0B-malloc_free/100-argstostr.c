#include "main.h"

/**
 * argstostr - Concatenates an array of strings
 * @ac: Number of elements in the array
 * @av: Double pointer to an array of strings
 *
 * Return: Pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 1;
	char *s = NULL;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}

