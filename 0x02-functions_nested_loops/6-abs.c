#include "main.h"

/**
 * _abs - Computes and returns the absolute value of a number
 * @n: The number whose absolute value is to be computed
 *
 * Return: int - the abslotue value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return (n *= -1);
	return (n);
}
