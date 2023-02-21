#include "main.h"

/**
 * _islower - Checks if a characy=ter is lowercase
 * @c: The character (int) to be checked
 *
 * Return: If c is lowercase, 1.
 * Otherwise return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
