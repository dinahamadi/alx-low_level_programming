#include "main.h"

/**
 * _calloc - check the code
 * @nmemb: unsigned integer
 * @size: unisgned integer
 * Return: a pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb + 1);
	if (p == NULL)
		return (NULL);
	while (i < nmemb)
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
