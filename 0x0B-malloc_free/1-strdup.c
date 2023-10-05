#include "main.h"
/**
 * _strdup - check the code.
 * @str: a string
 * Return: a pointer to the new string.
 */
char *_strdup(char *str)
{
	char *s2;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s2 = malloc(sizeof(char) * (strlen(str) + 1));
	if (s2 == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		s2[i] = str[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
