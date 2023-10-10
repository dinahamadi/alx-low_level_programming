#include "dog.h"

/**
 * print_dog - check the code
 * @d: dog struct
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", strcmp(d->name, "") == 0 ? "nil" : d->name);
	if (d->age <= 0)
		printf("Age: %s\n", "nil");
	else
		printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", strcmp(d->owner, "") == 0 ? "nil" : d->owner);
}
