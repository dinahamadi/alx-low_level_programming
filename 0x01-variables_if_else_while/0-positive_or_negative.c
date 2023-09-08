#include <stdlib.h>
#include <time.h>
/**
 * main - return if a number is negative or positive
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printtf("%d is negative\n", n);
		else if (n > 0)
		{
			printf("%d is positive\n", n);
			else
				printf("%d is zero\n");
		}
	}
	return (0);
}
