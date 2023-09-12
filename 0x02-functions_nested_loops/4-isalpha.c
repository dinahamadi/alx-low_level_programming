#include "main.h"

/**
 * _isalpha - check the code.
 * @c: a character
 * Return: 1 if c is a letter 0 otherwise.
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == c)
			return (1);
	for (i = 'A'; i <= 'Z'; i++)
		if (i == c)
			return (1);
	return (0);
}
