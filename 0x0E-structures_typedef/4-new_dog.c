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
	if (name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(d->name, name);
	if (age <= 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	if (owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	strcpy(d->owner, owner);
	return (d);
}
