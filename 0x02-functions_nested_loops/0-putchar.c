#include <stdio.h>
/**
 * main - entry point
 * Description - fn to print _putchar
 * Return - 0 always
 */
int main (void)
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
