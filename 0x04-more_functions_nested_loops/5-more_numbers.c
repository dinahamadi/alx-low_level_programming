#include "main.h"
/**
 * print_numbers - check the code
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int j;
	char i;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

