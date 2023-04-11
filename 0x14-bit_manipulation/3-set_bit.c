/**
 * set_bit - Sets a bit of number at the given index to 1.
 * @n: The number whose bit is to be set to 1.
 * @index: The index of the bit
 *
 * Return: 1 if successful. Otherwise return -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 63)
		return (-1);

	while (index)
	{
		index--;
		x = x << 1;
	}
	*n = *n | x;
	return (1);
}
