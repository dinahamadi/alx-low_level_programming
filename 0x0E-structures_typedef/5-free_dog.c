#include "dog.h"

/**
 * free_dog - check the code
 * @d: a pointer to a dog
 * Return: No return.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
