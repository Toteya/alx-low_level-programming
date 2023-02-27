/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first variable whose value is to be swapped
 * @b: Pointer to the second variable to be swapped
 *
 * Return: Nothing
 */
void swap_int(int a, int b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
