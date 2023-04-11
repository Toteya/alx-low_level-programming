/**
 * get_bit - Gets the bit of a number at the specified index
 * @n: The number whose bit is to be found
 * @index: The index of th ebit to be foud
 *
 * Return: The bit at the given index if successful.
 * Otherwise return -1.
 */
int get_bit(unsigned int n, unsigned int index)
{
	while (index)
	{
		if (n <= 1 && index)
			return (0);
		index--;
		n = n >> 1;
	}
	n = n & 1;
	return ((int) n);
}
