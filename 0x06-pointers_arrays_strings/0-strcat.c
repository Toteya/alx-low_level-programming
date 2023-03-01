/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which the string is to be concatenated
 * @src: The string to be concatenated to dest
 *
 * Return: Pointer to the modified string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;

	for (; *src != '\0'; i++, src++)
		dest[i] = *src;

	dest[i] = '\0';
	return (dest);
}
