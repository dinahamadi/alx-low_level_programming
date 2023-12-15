#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: the first unsigned number
 * @m: the second unsigned number
 * Return: returns the number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, lenght = sizeof(n) * 8;
	int flip = 0;

		for (i = 0; i < lenght; i++)
			if (((n >> i) & 1) != ((m >> i) & 1))
				flip += 1;
	return (flip);
}
