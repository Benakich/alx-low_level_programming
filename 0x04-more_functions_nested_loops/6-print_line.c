#include "main.h"

/**
 * print_line - print line
 * @n: number of lines to print
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		
		_putchar('_');
		
	}
	_putchar('\n');
}
