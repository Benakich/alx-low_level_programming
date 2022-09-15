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
			if (j != 0) 
			{
				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{
				_putchar('0');
                        }
			else if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((k % 10)  + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
