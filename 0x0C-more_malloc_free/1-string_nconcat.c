#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - fn to get length of string
 * @s: string pointer to be counted
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}

/**
 * string_nconcat - fn that concatenates 2 strings
 *
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: n bytes of s2 to be concatenated
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = (unsigned int)_strlen(s1);

	p = malloc((i + n + 1)  * sizeof(s1));
	if (p == NULL)
		return (NULL);

	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
			p[j] = s1[j];
		else
			p[j] = s2[k++];
	}
	p[j] = '\0';

	return (p);

}
