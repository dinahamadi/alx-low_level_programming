#include "main.h"
/**
 * _isupper - check the code
 * @c: an integer 
 * Return: Always 0.
 */
int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}	
	return (0);
}

