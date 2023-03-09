/**
 * factorial - Calculates the factorial of an integer
 * @n: The number (int) whose factorial is to be calculated
 *
 * Return: The factorial (int) of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 1)
		return (n * factorial(n - 1));
	return (1);
}
