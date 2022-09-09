#include <stdio.h>
/**
 * main - Entry point
 * Description - testing putchar
 * Return: 0
 */
int main (void)
{
	char ch;

	for(ch = 'z' ; ch>= 'A'; ch--)
	{
		putchar(ch);
	}
	return(0);
}
