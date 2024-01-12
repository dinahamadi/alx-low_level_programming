#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: a long int
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	unsigned int signif = 0, result;
	int i;


	if (n == 0)
		putchar('0');
	for (i = (sizeof(n) * 8) - 1; i >= 0; i--)
	{
		result = (n >> i) & 1;
		if (result == 1)
		{
			signif = 1;
			putchar('1');
		}
		if (result == 0 && signif == 1)
			putchar('0');
	}
}
