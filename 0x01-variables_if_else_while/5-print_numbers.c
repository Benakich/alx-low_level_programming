#include <stdio.h>
/**
 * main - entry point
 * Description - prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (; a <= 9 ; a++) 
	{
		printf("%i", a);
	}
	putchar('\n');
	return (0);
}

