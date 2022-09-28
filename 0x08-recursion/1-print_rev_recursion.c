#include "main.h"

/**
* _print_rev_recursion - fn that prints a string in reverse
* @s: pointer type string
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
