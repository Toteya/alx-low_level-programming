/**
 * infinite_add - Adds two numbers (strings) of any length
 * @n1: String containing the first number to be added
 * @n2: String containing the second number to be added
 * @r: Memory buffer to store the sum of n1 and n2
 * @size_r: Size of the buffer r
 * Return: Pointer to memory buffer r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, x, carry = 0, tmp;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	k = i;
	if (j > i)
		k = j;
	if (k >= size_r)
		return (0);
	r[k] = '\0';
	for ( ; k > 0; i--, j--, k--)
	{
		if (i > 0 && j > 0)
			x = carry + n1[i - 1] + n2[j - 1] - 2 * '0';
		else if (i > 0)
			x = carry + n1[i - 1] - '0';
		else
			x = carry + n2[j - 1] - '0';
		carry = x / 10;
		r[k - 1] = x % 10 + '0';
	}
	if (carry)
	{
		carry = carry + '0';
		for (k = 0; carry != '\0'; k++)
		{
			if (k >= size_r - 1)
				return (0);
			tmp = r[k];
			r[k] = carry;
			carry = tmp;
		}
		r[k] = '\0';
	}
	return (r);
}
