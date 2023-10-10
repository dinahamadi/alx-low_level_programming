#include "dog.h"

/**
 * new_dog - check the code
 * @name: a string
 * @age: a float
 * @owner: a string
 * Return: a pointer to the newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * strlen(name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	if (age <= 0)
		return (NULL);
	else
		d->age = age;
	d->owner = malloc(sizeof(char) * strlen(owner));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = owner;
	return (d);
}
