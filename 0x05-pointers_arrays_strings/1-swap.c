#include "main.h"

/**
 * swap_int - check the code
 * @a: first integer
 * @b: second integer
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
