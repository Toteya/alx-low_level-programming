/**
 * _memcpy - Copies memory area
 * @dest: Pointer to memory buffer to which to copy
 * @src: Pointer to memory from which to copy
 * @n: Number of bytes of src to copy
 * Return: Pointer to copied memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
