#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get one number to another
 * @n: starting number
 * @m: number to flip to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count;

	i = n ^ m;
	count = 0;

	while (i > 0)
	{
		count += (i & 1);
		i >>= 1;
	}

	return (count);
}
