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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
