#include "main.h"

/**
 * alloc_grid - Allocates memory to a 2-d array
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: A pointer to the 2-d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
