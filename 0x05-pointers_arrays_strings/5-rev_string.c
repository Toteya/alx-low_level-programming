/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	char t;
	int i = 0, j;

	while (s[i] != '\0')
		i++;

	i--;
	for (j = 0; j < i; j++, i--)
	{

		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}
