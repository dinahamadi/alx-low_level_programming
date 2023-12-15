#include "main.h"
/**
 * get_bit - check the code
 * @n: an unsigned number
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = (n >> index) % 2;
	if (result != 0 && result != 1)
		return (-1);
	return (result);
}
