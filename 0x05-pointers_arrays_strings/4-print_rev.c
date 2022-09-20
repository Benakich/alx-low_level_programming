#include "main.h"

/**
 * print_rev - prints a string followed by a newe line to stdout
 *
 * @str: string to be printed
 */
void print_rev(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
