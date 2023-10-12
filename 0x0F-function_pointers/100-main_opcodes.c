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
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	fil = fopen(__FILE__, "rb");
	if (fil == NULL)
	{
		fclose(fil);
		return (1);
	}
	buffer = malloc(sizeof(char) * atoi(argv[1]));
	if (buffer == NULL)
		return (1);
	let_r = fread(buffer, sizeof(char), atoi(argv[1]), fil);
	if (let_r == atoi(argv[1]))
	{
		for (i = 0; i < atoi(argv[1]); i++)
		{
			printf("%2hhx", buffer[i]);
			if (i != (atoi(argv[1]) - 1))
				printf(" ");
		}
	}
	printf("\n");
	fclose(fil);
	free(buffer);
	return (0);
}
