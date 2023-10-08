#include "main.h"

/**
 * malloc_checked - check the code
 * @b: unsigned int
 * Return: a poiter to null.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
