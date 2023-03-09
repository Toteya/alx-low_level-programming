/**
 * check_factor - Checks if a number is a factor of another number
 * @m: The possible factor
 * @n: The number whose factors is to be checked
 *
 * Return: 1, if m is a factor of m. Otherwise 0.
 */
int check_factor(int m, int n)
{
	if (m * 2 > n)
		return (1);
	if (n % m == 0)
		return (0);
	return (check_factor(m + 1, n));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Return: 1 if n is a prime number. Otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_factor(2, n));
}
