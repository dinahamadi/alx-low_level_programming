#include "main.h"

/**
 * _realloc - check the code
 * @ptr: apointer to the previousely allocated memrory
 * @old_size: an integer
 * @new_size: an integer
 * Return: a pointer to ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nptr;
	int i, min;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	if (ptr == NULL && new_size != 0)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	min = old_size < new_size ? old_size : new_size;
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < min; i++)
		nptr[i] = ((int *)ptr)[i];
	free(ptr);
	return ((void *)nptr);
}
