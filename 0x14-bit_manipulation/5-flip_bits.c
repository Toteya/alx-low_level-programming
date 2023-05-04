/**
 * flip_bits - Returns the number of bit that need to be flipped to get
 * one number to another.
 * @n: The first number
 * @m: The second number
 *
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bits++;
		n = n >> 1;
		m = m >> 1;
	}
	return (bits);
}

