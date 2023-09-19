#include "main.h"

/**
 * rev_string - check the code
 * @s: a string
 * Return: no return
 */
void rev_string(char *s)
{
	size_t j;
	char temp;

	for (j = 0; j <= (strlen(s) / 2); j++)
	{
		temp = s[j];
		s[j] = s[strlen(s) - j];
		s[strlen(s) - j - 1] = temp;
	}
}
