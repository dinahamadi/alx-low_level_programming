#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int count = 0, i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			else
				j++;
		}
		count += atoi(argv[i]);
		i++;
	}
	printf("%d\n", count);
	return (0);
}
