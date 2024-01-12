#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: a serie of chars (0 or 1)
 * Return: 0 if b is null or b contains chars other than 0 and 1
 *			or the result of the conversion .
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;

	if (b == NULL || (*b) == '\0')
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			result += 1 << (strlen(b) - i - 1);
		else if (b[i] == '0')
			continue;
		else
			return (0);
	}
	return (result);
}
