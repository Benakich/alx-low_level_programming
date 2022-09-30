#include <stdlib.h>
#include <stdio.h>
int _cent_divisor(int n);

/**
* _cent_divisor - divides money, n into cents
* @n: money to be divided
* Return: int, total number of coins
*/

int _cent_divisor(int n)
{
	int rem = 0;
	int total = 0;


	total += n / 25;
	rem = n % 25;

	if (rem > 9 && rem < 25)
	{
		total += rem / 10;
		rem %= 10;
	}
	if (rem > 5 && rem < 10)
	{
		total += rem / 5;
		rem %= 5;
	}
	if (rem > 2 && rem < 5)
	{
		total += rem / 2;
		rem %= 2;
	}
	if (rem < 2)
	{
		total += rem / 1;
		rem = 1;
	}
	return (total);

}


/**
* main - entry point
* @argc: count of arguments
* @argv: array of arguements
*
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int n;

	n = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (n > 0)
	{
		printf("%d\n", _cent_divisor(n));

	}
	else
		printf("0\n");
	return (0);
}

