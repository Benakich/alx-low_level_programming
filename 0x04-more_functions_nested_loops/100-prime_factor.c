#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Description - get the largest prome factor of the number 612852475143
 *
 * Return: 0 Always
 */
int main(void)
{
	long int i = 612852475143;
	long int k;

	for (k = 2; k < i; k++)
	{
		if (i % k == 0)
		{
			i = i / k;
		}
	}

	printf("%ld\n", k);
	return (0);
}
