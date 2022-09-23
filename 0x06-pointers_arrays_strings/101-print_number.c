#include "main.h"

/**
 * print_number - fn to print number
 *
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i = j;

	if (j < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
