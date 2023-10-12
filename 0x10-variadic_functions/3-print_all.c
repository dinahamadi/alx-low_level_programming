#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: a string
 * Return: No return.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	size_t len = strlen(format);

	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char*);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			break;
		}
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
