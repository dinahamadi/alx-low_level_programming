#include "main.h"
/**
 * wildcamp_helper - check the code
 * @s1: a string
 * @s2: a string
 * @ind1: an integer
 * @ind2: an integer
 * Return: 1 if s1 and s2 are identical and 0 otherwise.
 */
int wildcamp_helper(char* s1, char* s2, size_t ind1, size_t ind2)
{
	if (ind1 > strlen(s1))
		return (0);
	if (s1[ind1] == s2[ind2])
		return (wildcamp_helper(s1, s2, ind1 + 1, ind2 + 1));
	if (s1[ind1] != s2[ind2])
	{
		if (s2[ind2] != '*')
			return (0);
		else
			return (wildcamp_helper(s1, s2, ind1, ind2 + 1) + wildcamp_helper(s1, s2, ind1 + 1, ind2 + 1));
	}
}
/**
 * wildcamp - check the code
 * @s1: a string
 * @s2: a string
 * Return: 1 if s1 and s2 are identical and 0 otherwise.
 */
int wildcmp(char* s1, char* s2)
{
	size_t ind1 = 0, ind2 = 0;

	if (s1[ind1] == s2[ind2])
		return (wildcamp_helper(s1, s2, ind1 + 1, ind2 + 1));
	if (s1[ind1] != s2[ind2])
	{
		if (s2[ind2] != '*')
			return (0);
		else
			return (wildcamp_helper(s1, s2, ind1, ind2 + 1) + wildcamp_helper(s1, s2, ind1 + 1, ind2 + 1));
	}
}
