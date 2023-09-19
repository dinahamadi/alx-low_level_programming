#include "main.h"

/**
 * _puts - check the code
 * @str: a string
 * Return: a string.
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		str++;
		i++
	}
}
