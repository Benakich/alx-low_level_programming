#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int i = 1;
	int a = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			a += i;
		else if (i % 5 == 0)
			a += i;

		i++;
	}
	printf("%d\n", a);

	return (0);
}
