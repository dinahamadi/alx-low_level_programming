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
	int valid = 1;
	
	if (format == NULL)
		return;
	va_start(args, format);
	while (i < strlen(format))
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
			valid = 0;
			break;
		}
		if ((i < strlen(format) - 1) && (valid == 1))
			printf(", ");
		i++;
		valid = 1;
	}
	printf("\n");
	va_end(args);
}
