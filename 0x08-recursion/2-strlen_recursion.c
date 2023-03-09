/**
 * _strlen_recursion - Finds the lenght of a string
 * @s: The string whose length is to be found
 *
 * Return: Length (int) of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
