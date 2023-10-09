#include "main.h"

/**
 * argstostr - check code
 * @ac: number of arguments
 * @av: arguments
 * Return: NULL or pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int i = 0, j = 0, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	len += ac;
	arr = malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	k = i;
	while (i < len)
	{
		if (av[k][j] != '\0')
		{
			arr[i] = av[k][j];
			j++;
		}
		else
		{
			arr[i] = '\n';
			k++;
			j = 0;
		}
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
