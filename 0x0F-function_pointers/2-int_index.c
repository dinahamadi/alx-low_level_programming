#include "function_pointers.h"

/**
 * int_index - check code
 * @array: array of integes
 * @size: an integer
 * @cmp: a function pointer
 * Return: the index of the first element that cmp does not return 0
 * or -1 otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		while (i <= size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
