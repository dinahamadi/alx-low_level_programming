#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: a string
 * Return: No return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
