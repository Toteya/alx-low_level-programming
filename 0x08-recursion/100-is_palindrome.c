#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @str: The string whose length is to be found
 *
 * Return: Length (int) of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * @len: The length of the string
 *
 * Return: 1 if s is a palindrome. Otherwise 0.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != s[len - 1])
		return (0);
	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if s a palindrome. Otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, len));
}
