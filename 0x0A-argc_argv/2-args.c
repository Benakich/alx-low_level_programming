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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

