#include "main.h"

/**
 * _calloc - check the code
 * @nmemb: unsigned integer
 * @size: unisgned integer
 * Return: a pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return ((void *)(p));
}
