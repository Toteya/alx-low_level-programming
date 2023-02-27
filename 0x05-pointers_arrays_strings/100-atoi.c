/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted to an integer
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int num = 0;
	int i;
	int sign = 1;
	int numfound = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!numfound)
		{
			if (s[i] == '-')
				sign *= -1;
			if (s[i] >= '1' && s[i] <= '9')
			{
				numfound = 1;
				num *= sign;
			}
		}
		if (numfound)
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
				break;
			num = num * 10 + sign * (s[i] - '0');
		}
	}
	return (num);
}
