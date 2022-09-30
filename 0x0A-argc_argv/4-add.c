#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
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
	int num;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);

			if (!*p)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
