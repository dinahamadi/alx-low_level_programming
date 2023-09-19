#include "main.h"

/**
 * _puts - check the code
 * @str: a string
 * Return: a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
