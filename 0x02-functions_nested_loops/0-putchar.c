#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description - fn to print -putchar
 * Return: 0 always (Success)
 */
int main(void)
{
	char i[] = "_putchar";
	int p = 0;

	while (i[p] != '\0')
	{
		putchar(i[p]);
		p++;
	}
	putchar('\n');
	return (0);
}
