/**
 * reverse_array - Reverses the content of an array
 * @a: Pointer to the first element of the array to be reversed
 * @n: Number of elements of the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n - 1; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
	}
}
