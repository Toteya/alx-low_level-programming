/**
 * set_bit - Sets the value of a bit at the given index to 1.
 * @n: The number whose bit is to be set
 * @index: The index of the bit
 *
 * Return: 1 (SUCCESS). Otherwise return -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter = 1;

	if (index > 63)
		return (-1);

	while (index > 0)
	{
		setter = setter << 1;
		index--;
	}
	*n = *n | setter;
	return (1);
}
