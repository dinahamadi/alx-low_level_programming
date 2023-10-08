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
	void *nptr;
	unsigned int i, min;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
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
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < min; i++)
		((char *)nptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (nptr);
}
