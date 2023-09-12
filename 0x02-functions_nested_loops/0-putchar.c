#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "_putchar";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (1);
}
