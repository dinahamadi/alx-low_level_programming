#include "main.h"

/**
 * _strchr - check the code
 * @s: a string
 * @c: a character
 * Return: a pointer to the first occurence of the character c.
 */
char *_strchr(char *s, char c)
{
	while (s != NULL && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (NULL);
}
