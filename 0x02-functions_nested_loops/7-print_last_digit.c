#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @d: number to be tested
 *
 * Return: last digit of the number
 */
int print_last_digit(int d)
{
	int j;

	if (d < 0)
	{
		d = -d;
		j = d % 10;
		_putchar(j + '0');
		return (j);
	}
	else
	{
		j = d % 10;
		_putchar(j + '0');
		return (j);
	}
}
