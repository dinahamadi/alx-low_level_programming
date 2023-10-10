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
	d->name = "name";
	d->age = age;
	d->owner = "owner";
}
