#include "dog.h"

/**
 * init_dog - check the code
 * @d: dog struct
 * @name: a string
 * @age: a float
 * @owner: astring
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	if (age >= 0)
		d->age = age;
	else
		return;
	d->owner = owner;
}
