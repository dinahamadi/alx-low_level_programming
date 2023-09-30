#include "main.h"
/**
*_strlen_recursion: chack the code
* @s: astring
* Return: an integer
*/

int _strlen_recursion(char* s)
{
	if (s != NULL)
		return (1 + _strlen_recursion(s + 1));
	else
			return (0);
}