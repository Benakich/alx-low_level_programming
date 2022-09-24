#include "main.h"

/**
 * print_number - fn to print integer with only _putchar
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m /10)
		print_number(n / 10);

	_putchar(m % 10 + '0');
}
