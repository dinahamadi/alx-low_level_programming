#include "main.h"

/**
 * _strlen - check the code
 * @s: a string
 * Return: the string lenght.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
