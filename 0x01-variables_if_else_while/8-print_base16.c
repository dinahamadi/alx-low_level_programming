#include <stdio.h>
/**
 * main - prints numbers in hexadecimal
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
	putchar('\n');
	return (0);
}
