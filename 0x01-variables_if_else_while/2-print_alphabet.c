#include <stdio.h>
/**
 * main - Entry point
 * Description - code to print out
 * lower case alphabets
 * using putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);

}
