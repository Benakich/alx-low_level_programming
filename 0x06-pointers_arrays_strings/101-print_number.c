#include "main.h"
#include <stdio.h>

/**
 * int_reverse - reverse given integer
 *
 * @n: int to be reversed
 *
 * Return: reversed nt
 */

int int_reverse(int n)
{
	int remainder;
	int reverse = 0;

	if (n < 0)
	{
		_putchar('-');
		reverse = -reverse;
	}
	if (n == 0)
	{
		reverse = 0;
	}
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}
	return (reverse);
}

/**
 * print_number - fn to print number
 *
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int m;

	m = int_reverse(n);

	if (m < 0)
	{
		m = -m;

	}
	if (m == 0)
	{
		_putchar(m + '0');
	}
	while (m != 0)
	{
		_putchar((m % 10) + '0');
		m /= 10;
	}
}
