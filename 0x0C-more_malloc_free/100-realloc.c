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

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	memcpy(nptr, ptr, old_size < new_size ? old_size : new_size);
	if (ptr != NULL)
		free(ptr);
	return (nptr);
}
