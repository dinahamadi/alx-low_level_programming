#include "main.h"

/**
 * jack_bauer - check the code
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ;i < 24; i++)
		for (j = 0; j < 60; j++)
			printf("%2d:%2d\n", i, j);
}
