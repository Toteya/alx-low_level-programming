/**
 * _strncat - Concatenates two strings
 * @dest: String to be concatenated to
 * @src: String to be concatenated to dest
 * @n: Number of bytes of src to be concatenated to dest
 * Return: Pointer to the modified string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
