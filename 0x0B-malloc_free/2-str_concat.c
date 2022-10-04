#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *str_concat  - fn to create a new array with concat str
*
* @s1: char to concatenate
* @s2: char to concatenate
*
* Return: NULL if failure, " " is NULL is passed, otherwise array of concat str
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int n;
	unsigned int counter;
	unsigned int totlen;
	char *A;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		n++;
	}

	totlen = i + n;

	A = malloc((totlen + 1) * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		A[i] = s1[i];
	}
	for (counter = i, n = 0; counter < totlen; counter++, n++)
	{
		A[counter] = s2[n];
	}
	A[counter + 1] = s2[n + 1];

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	return (A);
}
