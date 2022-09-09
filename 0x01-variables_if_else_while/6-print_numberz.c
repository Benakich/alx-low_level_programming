#include <stdio.h>
/**
 * Main - Entry point
 * Description - print numbers in base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
