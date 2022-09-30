#include <stdio.h>

/**
 *_strlen - len of a given string
 *
 * @s: len to be counted
 *
 * Return: strlen
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}

