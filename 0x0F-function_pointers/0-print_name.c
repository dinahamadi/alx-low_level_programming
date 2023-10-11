#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: name of the person
 * @f: a pointer to function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(f)(name);
}
