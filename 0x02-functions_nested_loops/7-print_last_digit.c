#include "main.h"

/**
 * print_last_digit - check the code
 * @n: an integer
 * Return: the value of last digit.
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
