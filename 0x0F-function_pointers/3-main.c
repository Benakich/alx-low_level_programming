#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument value
 *
 * Return: Always 0;
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *s;
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];

	if ((*s == '/' || *s == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);

	}
	printf("%d\n", get_op_func(s)(num1, num2));

	return (0);
}
