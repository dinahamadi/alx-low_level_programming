#include "main.h"
/**
 * _memset - check function
 * @s: a string
 * @n: the first n bytes
 * @b: the constant byte
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

