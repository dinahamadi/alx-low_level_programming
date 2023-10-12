#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 * @argc: number od arguments
 * @argv: arguments
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char *opc = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02x", opc[i]);
		if (i != (atoi(argv[1]) - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
