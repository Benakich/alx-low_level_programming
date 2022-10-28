#include "main.h"

/**
 * get_bit - fn that returns value of a bit at a given index
 * @index: index of the bit you want to get
 * @n: bit given
 * Return: Value of the bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
