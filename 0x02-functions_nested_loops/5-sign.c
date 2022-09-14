#include "main.h"
/**
 * print_sign - to print sign of a number
 *
 * @n: number to be tested
 * Return: 1 if positive
 * 0 if zero
 * -1 if less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
