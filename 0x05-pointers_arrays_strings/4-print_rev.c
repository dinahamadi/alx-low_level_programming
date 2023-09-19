#include "main.h"

/**
 * print_rev - check the code
 *
 * Return: no return.
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s); j > 0; j--)
		_putchar(str[j]);
	_putchar('\n');
}
