#include "main.h"

/**
 * rot13 - Encrypts a string using ROT13 encryption
 * @s: The string to be encrypted
 *
 * Return: Pointer to the encrypted string
 */
char *rot13(char *s)
{
	char decoder[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoder[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; decoder[j] != '\0'; j++)
		{
			if (s[i] == decoder[j])
			{
				s[i] = encoder[j];
				break;
			}
		}
	}
	return (s);
}
