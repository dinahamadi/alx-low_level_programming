#include "main.h"

/**
 * string_nconcat - check the code
 * @s1: a string
 * @s2: a string
 * @n: unsigned integer
 * Return: a pointer to new allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (s3 == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < strlen(s1) + n; i++)
		if (i < strlen(s1))
			s3[i] = s1[i];
		else
		{
			s3[i] = s2[j];
			j++;
		}
	s3[i + 1] = '\0';
	return (s3);
}

