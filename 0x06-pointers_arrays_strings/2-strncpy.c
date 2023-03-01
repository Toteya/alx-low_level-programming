/**
 * _strncpy - Copies a string
 * @dest: Buffer to which the string is to be copied
 * @src: The string to be copied
 * @n: Number of bytes of src to be copied
 * Return: Pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, end = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			end = 1;
		if (end)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
