/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: String of 0 and 1 chars, representing a binary number
 *
 * Return: The converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	for (i = 0; b && b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;
		num = num | (b[i] - '0');
	}
	return (num);
}
