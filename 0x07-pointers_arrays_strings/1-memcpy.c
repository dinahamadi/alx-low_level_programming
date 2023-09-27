#include "main.h"
/**
 * _memcpy - check function
 * @dest: destination string
 * @src: source string
 * @n: the n bytes
 * Return: a pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > strlen(src))
		n = strlen(src);
	if (strlen(src) > strlen(dest))
	{
		dest = malloc(sizeof(char) * (strlen(src) + 1));
		if (dest == NULL)
			return (NULL);
	}
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

