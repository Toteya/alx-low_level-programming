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
				if (sign < 0)
					num *= -1;
			}
		}
		if (numfound)
		{
			if (!(s[i] >= '0' && s[i] <= '9'))
				break;
			if (sign > 0)
				num = num * 10 + (s[i] - '0');
			else
				num = num * 10 - (s[i] - '0');
		}
	}
	return (num);
}
