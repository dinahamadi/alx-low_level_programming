#include "function_pointers.h"
/**
 * array_iterator - check code
 * @array: an integer
 * @size: unsigned integer
 * @action: a function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
