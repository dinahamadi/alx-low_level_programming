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
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	if (d->age < 0)
		printf("Age: %s\n", "(nil)");
	else
		printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
