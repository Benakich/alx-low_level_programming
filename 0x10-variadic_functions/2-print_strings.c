#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - fn that returns the sum of all its parameters
 * @separator: char str to separate numbers
 * @n: number of arguments
 * @...: variable number of argumenets
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list c;
	char *hold;
	unsigned int i;

	va_start(c, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(c, char *);
		if (hold == NULL)
				printf("(nil");
		else
			printf("%s", hold);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(c);
}
