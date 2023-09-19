#include "main.h"

/**
 * print_array - check the code for
 * @a: array of integers
 * @n: number of elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
