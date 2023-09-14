#include "main.h"
/**
 * _isdigit - check the code
 * @c: an integer
 * Return: Always 0
 */
int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

