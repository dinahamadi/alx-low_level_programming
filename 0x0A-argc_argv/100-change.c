#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		count = (atoi(argv[1]) / 25) + ((atoi(argv[1]) % 25) / 10);
		count += (((atoi(argv[1]) % 25) % 10) / 5);
		count += ((((atoi(argv[1]) % 25) % 10) % 5) / 2);
		count += ((((atoi(argv[1]) % 25) % 10) % 5) % 2);
		printf("%d\n", count);
	}
	return (0);
}
