#include "main.h"

/**
 * print_rev - check the code
 * @s: a string
 * Return: no return.
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s); j = 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
