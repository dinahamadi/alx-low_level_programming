#include "main.h"

/**
 * str_concat - check the code.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the newly string.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (i < (strlen(s1) + strlen(s2)))
	{
		if (i < strlen(s1))
			str[i] = s1[i];
		else
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
