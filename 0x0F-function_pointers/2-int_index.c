/**
 * int_index - Searches for an integer in array according to the given function
 * @array: The array in which to search for the integer
 * @size: The size of the array
 * @cmp: Pointer to the search function
 *
 * Return: Index (int) of the first match in the array.
 * Otherwise return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size < 1 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
