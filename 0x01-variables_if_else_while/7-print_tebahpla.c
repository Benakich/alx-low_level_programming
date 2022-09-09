#include <stdio.h>
/**
 * main - entry point
 * Description - print alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
