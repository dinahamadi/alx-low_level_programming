#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 != 0)
				_putchar('0' + 1);	
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}

