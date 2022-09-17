#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 */
void print_number(int n)
{
	int m;
	int p;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n >= 1000)
	{
		m = n / 100;

		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');

		p = n  % 100;

		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
	if (n >= 100 && n < 1000)
	{
		m = n / 100;

		_putchar(m + '0');

		p = n % 100;

		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
	if (n >= 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n < 10)
		_putchar(n + '0');
}
