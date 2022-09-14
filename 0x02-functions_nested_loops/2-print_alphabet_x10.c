#include "main.h"
/**
 * print_alphabet_x10 - print alphabets and repeat 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 1;
	char a;

	for (; i <= 10;)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
