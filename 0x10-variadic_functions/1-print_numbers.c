#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: a string
 * @n: an integer
 * Return: No return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}

