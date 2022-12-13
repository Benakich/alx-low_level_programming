#include "main.h"
#include <stdio.h>

/**
 * _strcmp - fn to compare strings (using unsigned char)
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
