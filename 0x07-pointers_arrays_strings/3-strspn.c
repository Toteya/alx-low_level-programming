/**
 * _strspn - Gets the length of a prefix substring
 * @s: String in which to check to for accepted bytes
 * @accept: String of accepted bytes to check for in s
 * Description: Returns the number of bytes in the initial segment of s
 * which consists only of bytes from accept.
 * Return: Length in bytes of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (i);
}
