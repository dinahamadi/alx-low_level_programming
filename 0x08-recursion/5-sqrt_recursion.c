#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - check the code
 * @n: an integer
 * @sq: an integer
 * Return: the natural square root.
 */
int _sqrt_helper(int sqb,int  sqh, int n)
{
	int mid;

	if (sqh - sqb < 0)
		return (-1);
	mid = (sqh + sqb) / 2;
	if (mid * mid == n)
		return (mid);
	if (mid * mid > n)
		return (_sqrt_helper(sqb, (sqh + mid) / 2,n));
	return (_sqrt_helper((sqb + mid) / 2, sqh, n));
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
	return (_sqrt_helper(0, n / 2, n));
}
