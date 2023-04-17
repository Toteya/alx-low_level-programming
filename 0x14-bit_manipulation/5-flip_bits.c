/**
 * flip_bits - Returns the number of bits to be flipped to get from one
 * number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 0x01) != (m & 0x01))
			bits++;
		if (n)
			n = n >> 1;
		if (m)
			m = m >> 1;
	}
	return (bits);
}
