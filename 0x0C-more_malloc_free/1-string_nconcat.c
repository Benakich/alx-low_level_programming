#include "main.h"
#include <stdio.h>
#include <stdlib.h>


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
	char *c;
	unsigned int m = n, i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		m++;

	c = malloc((m + 1) * sizeof(s1));

	if (c == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[j++] = s2[i];

	concat[j] = '\0';

	return (c);
}
