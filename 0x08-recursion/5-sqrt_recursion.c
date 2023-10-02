#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - check the code
 * @n: an integer
 * @sq: an integer
 * Return: the natural square root.
 */
int _sqrt_helper(int sq, int n)
{
	if (sq < 1)
		return (-1);
	if (sq * sq == n)
		return (sq);
	if (sq * sq > n)
		return (_sqrt_helper(sq - 1, n));
	if (sq * sq < n)
		return (_sqrt_helper(sq + 1, n));
}
/**
 * _sqrt_recursion - check the code
 * @n: an integer
 * Return: the natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_helper(n / 2, n));
}
