#include "3-calc.h"
/**
 * main - check code
 * @argc: number of parameters
 * @argv: parameters
 * Return: 0 in success.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0) &&
			((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
