#include <stdio.h>

/**
 * binary_to_uint - fn that converts a binary number to an unsigned int
 * @b: pointer to binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int counter = 0;
	unsigned int m = 0;
	unsigned int exp = 1;

	if (b == NULL)
		return (0);

	for (; b[counter]; )
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		counter++;
	}

	for (counter -= 1; counter >= 0; counter--)
	{
		m += ((b[counter] - '0') * exp);
		exp *= 2;
	}

	return (m);
}
