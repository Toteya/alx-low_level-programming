/**
 * check_separator - Checks if a character is a valid word separator
 * @c: The character to be checked
 *
 * Return: 1 if character is a valid separator.
 * Otherwise 0.
 */
int check_separator(char c)
{
	switch (c)
	{
		case ' ':
			return (1);
		case '\t':
			return (1);
		case '\n':
			return (1);
		case ',':
			return (1);
		case ';':
			return (1);
		case '.':
			return (1);
		case '!':
			return (1);
		case '?':
			return (1);
		case '"':
			return (1);
		case '(':
			return (1);
		case ')':
			return (1);
		case '{':
			return (1);
		case '}':
			return (1);
	}
	return (0);
}

/**
 * cap_string - Capitalises each word of a string
 * @s: The string to be capitalised
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (!i || (check_separator(s[i - 1])))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
