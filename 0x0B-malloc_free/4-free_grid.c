#include "main.h"

/**
 * free_grid - Free dynamically allocated memory of a 2-dimensional array
 * @grid: Double pointer to the 2-d array
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
