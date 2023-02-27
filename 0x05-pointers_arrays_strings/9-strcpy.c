/**
 * _strcpy - Copies a string
 * @dest: Pointer to a buffer to which to copy the string
 * @src: Pointer to the string to be copid to dest
 *
 * Return: Pointer to the copied string, dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
