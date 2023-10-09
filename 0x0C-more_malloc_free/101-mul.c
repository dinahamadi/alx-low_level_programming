#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	j = 0;
	while (argv[2][j] != '\0')
	{
		if (!isdigit(argv[2][j]))
		{
			printf("Error\n");
			exit(98);
		}
		j++;
	}
	if (argv[1] < INT_MAX && argv[2] < INT_MAX)
		return (argv[1] * argv[2]);
	return (0);
}
