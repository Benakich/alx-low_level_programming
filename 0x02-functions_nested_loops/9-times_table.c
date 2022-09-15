#include "main.h"
/**
 * times_table - to create a multiplication table
 */
void times_table(void)
{
	int i; /* current multiplier */
	int j; /* range */
	int k;

	for (i = 0; i <= 9;)
	{
		for (j = 0; j <= 9; j++)
		{
			k = (i * j);
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
