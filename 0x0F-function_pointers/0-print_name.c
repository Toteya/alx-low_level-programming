/**
 * print_name - Prints a name
 * @name: String name to be printed
 * @f: Pointer to a function that prints a name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
