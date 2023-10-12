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
	FILE *fil;
	size_t let_r;
	int i;
	char *buffer;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		return (2);
	}
	fil = fopen(argv[0], "rb");
	if (fil == NULL)
		return (-1);
	buffer = malloc(sizeof(char) * atoi(argv[1]));
	if (buffer == NULL)
		return (-1);
	let_r = fread(buffer, sizeof(char), atoi(argv[1]), fil);
	if (let_r == atoi(argv[1]))
	{
		for (i = 0; i < atoi(argv[1]); i++)
		{
			printf("%02x", buffer[i]);
			if (i != (atoi(argv[1]) - 1))
				printf(" ");
		}
	}
	printf("\n");
	fclose(fil);
	return (0);
}
