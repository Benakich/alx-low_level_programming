#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
* @argc: count of arguments
* @argv: array of arguements
*
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		if (atoi(argv[i]))
		{
			sum += (atoi(argv[i]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
