/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: If c is a digit. Otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
