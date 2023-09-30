#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: a string
 * Return: No return.
 */
void _print_rev_recursion(char *s)
{
	if (s != NULL)
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
