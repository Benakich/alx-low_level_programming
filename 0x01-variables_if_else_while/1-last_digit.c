#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - Assign a random number
 * compare to 5,6,0
 * Return: 0 Always (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit;

	digit = n % 10;
	printf("Last digit of %d is %d", n, digit);
	if (digit < 6 && digit != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else if (digit > 5)
	{
		printf("and if greater than 5\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
