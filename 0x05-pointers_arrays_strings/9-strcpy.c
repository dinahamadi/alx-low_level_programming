#include "main.h"
#include <stdlib.h>
/**
 * _strcpy - check the code
 * @dest: destination string
 * @src: source string
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t i = 0;

	if (strlen(src) > strlen(dest))
	{
		dest = malloc(sizeof(char) * (strlen(src) + 1));
		if (dest == NULL)
		{
			free(dest);
			return (NULL);
		}
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
