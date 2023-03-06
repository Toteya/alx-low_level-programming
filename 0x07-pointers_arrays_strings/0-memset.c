/**
 * _memset - Fills a block of memory with a constant byte
 * @s: pointer to memory buffer to be filled with the constant byte
 * @b: The byte to fill the memory s
 * @n: Number of bytes of the memory s to be filled
 * Return: Pointer to memory block s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
