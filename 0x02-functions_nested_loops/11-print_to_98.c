#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from int n to 98
 * @n: digit to count from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
