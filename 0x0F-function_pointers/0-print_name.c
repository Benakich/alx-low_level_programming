#include "function_pointers.h"

/**
 * print_name - fn that prints a name
 * @name: char
 * @f: fn pointer
 * @*: char
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
