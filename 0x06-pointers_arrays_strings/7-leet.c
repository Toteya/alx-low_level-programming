/**
 * leet - Encode a strings into 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char decode[6] = "aeotl";
	char encode[6] = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == decode[j] || str[i] == decode[j] - 32)
			{
				str[i] = encode[j];
			}
		}
	}
	return (str);
}
