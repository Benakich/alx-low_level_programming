#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - fn to print integer with only _putchar
 *
 * @n: integer to be printed
 */

void print_number(int n)
{

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n == 0)
		putchar('0');

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
