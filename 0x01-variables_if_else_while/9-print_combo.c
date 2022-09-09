#include <stdio.h>
/**
 * main - entry point
 * Description - all combinations of single digits
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	{
		putchar(a + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
