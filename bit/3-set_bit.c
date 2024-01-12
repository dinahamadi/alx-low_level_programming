#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to an unsigned number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int result = 0;

	if (index > sizeof(n) * 8)
		return (-1);
	result = (*n >> index) & 1;
	if (result == 1)
		return (1);
	if (result == 0)
	{
		*n |= 1UL << index;
		return (1);
	}
	return (-1);
}
