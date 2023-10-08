#include "main.h"

/**
 * array_range - check the code
 * @max: an integer
 * @min: an integer
 * Return: a pointer to the new array.
 */
int *array_range(int min, int max)
{
	int i, diff = max - min + 1;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * diff);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < diff; i++)
		arr[i] = min + i;
	return (arr);
}
