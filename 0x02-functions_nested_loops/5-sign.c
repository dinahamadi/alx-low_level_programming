#include "main.h"

/**
 * print_sign - check the code.
 * @n: an integer
 * Return: 1 if positif, 0 if zero , -1 if negatif.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
