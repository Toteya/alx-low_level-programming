/**
 * find_root - Recursively checks whether a number is a root of another number
 * @m: The number to check
 * @n: The number whose root is to be found
 *
 * Return: The root of n, Otherwise returns -1.
 */
int find_root(int m, int n)
{
	if (n < m *  m)
		return (-1);
	if (n == m * m)
		return (m);
	return (find_root(m + 1, n));
}


/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: Integer whose natural sqaure root is to be found
 *
 * Return: Natural root (int) of n
 */
int _sqrt_recursion(int n)
{
	return (find_root(1, n));
}
