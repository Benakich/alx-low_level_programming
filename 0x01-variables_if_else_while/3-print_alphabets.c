#include <stdio.h>
/**
 * main - Entry point
 * Description - print upper and lower case A-z
 * using only putchar
 * Return: 0 Always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

