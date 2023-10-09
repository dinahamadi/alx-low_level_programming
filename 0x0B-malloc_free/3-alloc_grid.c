#include "main.h"

/**
 * alloc_grid - check code
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to a 2 dimensional array of integer.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
		if (arr == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
