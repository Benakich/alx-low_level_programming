#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_strdup  - fn to create an array with duplicat str
*
* @str: char to initialise with
*
* Return: NULL if size = 0, otherwise char
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int n;
	char *A;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	A = malloc((i + 1) * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		A[n] = str[n];
	}
	A[n] = '\0';
	return (A);
}
