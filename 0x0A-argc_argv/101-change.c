#include <stdio.h>
#include <stdlib.h>

/**
* main -entry point
* @argc: count of arguments
* @argv: array of arguements
*
* Return: 0 always
*/


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int n;
	int rem;
	int total;

	n = atoi(argv[1]);

	if (n > 0)
	{
		total += n / 25;
		rem = n % 25;

		if (rem > 9 && rem < 25)
		{
			total += rem / 10;
			rem %= 10;
		}	
		if (rem > 4 && rem < 10)
		{
			total += rem / 5;
			rem %= 5;
		}
		if (rem > 1 && rem < 5)
		{
			total += rem / 2;
			rem %= 2;
		}
		if (rem < 2)
		{
			total += rem / 1;
			rem = 1;
		}
	}
	else
	{
			printf("All good: %d\n", argc);
			return (1);
	{
	return (0);
}
