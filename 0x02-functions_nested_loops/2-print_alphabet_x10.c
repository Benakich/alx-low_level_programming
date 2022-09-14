#include "main.h"
/**
 * print_alphabet_x10 - print alphabets and repeat 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char a = 'a';

	for (; i <= 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
