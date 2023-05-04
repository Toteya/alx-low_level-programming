/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number whose bit is to be returned
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	bit = (int) n & 1;
	return (bit);
}

