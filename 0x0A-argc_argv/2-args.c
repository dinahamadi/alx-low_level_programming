#include <stdio.h>
#include <stddef.h>
/**
* main - Entry point
* @argc: number of arguments
* @argv: arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	(void)argc;
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
