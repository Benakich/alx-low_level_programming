#include <stdio.h>

/**
 * main - Entry point
 * Description - code to combine double digits
 * Return - 0 always 
 */
int main(void)
{
	int a = 1;
	int i = 0;
	int m = 100;

	while( i < 9)
	{
		while(a < 9)		{

			putchar(i + '0');
			putchar(a + '0');
			if (a!= 9 && i !=9)
			{
				putchar(',');
				putchar(' ');
			}
				
			a++;	
		}
		
		i++;
	}
	putchar('\n');
	return (0);


}


