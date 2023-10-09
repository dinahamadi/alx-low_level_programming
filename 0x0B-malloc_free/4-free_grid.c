#include "main.h"

/**
 * free_grid - check code
 * @grid: a pointer to a two dim grid
 * @height: height of the grid
 * Return: no return.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
