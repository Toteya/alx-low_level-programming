/**
 * _isupper() - Checks if a character is uppercase
 * @c: The characcter to be checked
 *
 * Return: If c is uppercase 1, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
