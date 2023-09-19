#include "main.h"

/**
 * puts2 - check the code
 * @str: a string
 * Return: no return.
 */
int puts2(char *str)
{
	size_t j = 0;

	while (j < strlen(str))
		if ((j % 2) == 0)
			_putchar(s[j]);
	_putchar('\n');
}
