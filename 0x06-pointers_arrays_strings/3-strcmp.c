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
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
