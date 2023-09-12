#include "main.h"

/**
 * _islower - check the code.
 * @c: a character
 * Return: 1 if c is lowercase 0 otherwise.
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);

	}
	return (0);
}
