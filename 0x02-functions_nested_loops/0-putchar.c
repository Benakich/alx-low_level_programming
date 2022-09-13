#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description - fn to print -putchar
 * return - 0 always
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
