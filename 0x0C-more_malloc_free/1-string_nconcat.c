#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int i, j, k, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);

	p = malloc((i + n) * sizeof(*s1));
	if (p == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	if (n >= j)
	{
		for (m = 0; m < j; m++)
		{
			p[i] = s2[m];
			i++;
		}
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			p[i] = s2[m];
			i++;
		}
	}

	return (p);

}
