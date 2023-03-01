/**
 * string_toupper - Converts all lowercase letters of a string to uppercase
 * @s: String that is to be converted to uppercase
 *
 * Return: Pointer to the altered string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
