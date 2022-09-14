#include "main.h"
/**
 * jack_bauer - fn to print time
 */
void jack_bauer(void)
{
	int m = 60;
	int h = 24;

	for (; h < 24;)
	{
		for (; m < 60;)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
