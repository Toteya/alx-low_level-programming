#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character (int) to be checked
 *
 * Return: If c is alphabetic, 1. Otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
