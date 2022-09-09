#include <stdio.h>
/**
 * main - entry point
 * Description - print base 16 numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	char c = 'a';

	for (; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
