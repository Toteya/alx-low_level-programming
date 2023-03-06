/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to the string to be set
 * @to: The string to be set to s
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
