#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	unsigned int i = 0, n = 0;
	char s[100];
	int sum = 0;
	srand(time(NULL));
	while( sum < 2772)
	{
		n = rand() % 95 + 32;
		sum += n; 
		s[i] = (char)n;
		i++;
	}
	s[i] = 2772 - sum;
	s[i + 1] = '\0';
	printf("%s\n", s);
	return (0);
}
