#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - print numbers 1-100, print fizz for multiples of 3 and Buzz for
 * multiples of 5.
 * print fizzBuzz for multiples of 3 and 5
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 0 && (i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf("Buzz ");

		else if (i != 0 && (i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
