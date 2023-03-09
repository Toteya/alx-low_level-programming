/**
 * _pow_recursion - Calculation the result of exponentiating two numbers
 * @x: The base
 * @y: The exponent
 *
 * Return: The result of x raised to power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y >= 1)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
