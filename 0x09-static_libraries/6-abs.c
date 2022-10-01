#include "main.h"
/**
 * _abs - to get the absolute value of an int
 *
 * @d: number to be tested
 *
 * Return: 0 always
 */
int _abs(int d)
{

	if (d < 0)
	{
		return (d * -1);
	}
	else
	{
		return (d);
	}
	_putchar('\n');
}
