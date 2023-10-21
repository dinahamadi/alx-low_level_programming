#include <stdio.h>
__attribute((constructor)) void before_main(void);
/**
 * before_main - check the code
 *
 * Return: no return.
 */
__attribute((constructor)) void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
