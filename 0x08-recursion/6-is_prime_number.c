#include "main.h"
/**
 * is_prime_helper - check the code
 * @p: an integer
 * @n: an integer
 * Return: 1 if true 0 otherwise.
 */
int is_prime_helper(int p, int n)
{
	if (p == 1)
		return (1);
	if (n % p == 0)
		return (0);
	else
		return (is_prime_helper(p - 1, n));
}

/**
 * is_prime_number - check the code
 * @n; an integer
 * Return: 1 if true 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (-1);
	return(is_prime_helper(n -1, n));
}
