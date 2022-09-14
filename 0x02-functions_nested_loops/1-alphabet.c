#include "main.h"
/**
 * print_alphabet - print alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
