#include <stdlib.h>
#include <stdio.h>

/**
* main - entry point
* @argc: count of arguments
* @argv: array of arguements
*
* Return: 0 always
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
