#include "main.h"

/**
 * puts_half - check the code
 * @str: a string
 * Return: no return.
 */
void puts_half(char *str)
{
	size_t n, i;

	if ((strlen(str) % 2) != 0)
		n = (strlen(str) - 1) / 2;
	else
		n = strlen(str) / 2;
	for (i = n ; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
