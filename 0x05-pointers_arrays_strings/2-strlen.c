/**
 * _strlen - Returns the length of a string
 * @s: String whose lenght is to be returned
 *
 * Return: Length (int) of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
