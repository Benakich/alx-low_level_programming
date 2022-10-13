#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fn that returns the sum of all its parameters
 * @n: const int to sum
 * @...: variable number of argumenets
 * Return: sum of all arguments otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	unsigned int m = 0;

	va_start(num, n);
	for (i = 0; i < n; i++)
		m += va_arg(num, int);
	va_end(num);
	return (m);
}

