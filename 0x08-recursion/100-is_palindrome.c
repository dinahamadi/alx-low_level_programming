#include "main.h"
/**
 * palindrome_helper - check the code
 * @n: an integer
 * @index: an integer
 * @s: a string
 * Return: 1 if palindrome 0 otherwise.
 */
int palindrome_helper(int index, int n, char *s)
{
	if (n - index <= 1)
		return	(1);
	if (s[index] != s[n - 1])
		return (0);
	return (palindrome_helper(index + 1, n - 1, s));
}
/**
 * is_palindrome - check the code
 * @s: a string
 * Return: 1 if palindrome 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_helper(0, strlen(s), s));
}
