#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: a string
 * @n: an inetger
 * Return: No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *str;

	if (separator == NULL)
		separator = "";
	va_start(args, n);
	while (i < n)
	{
		str = (va_arg(args, const char*));
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
