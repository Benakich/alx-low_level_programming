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

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	A = malloc(i * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (A == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		A[n] = str[n];
	}
	return (A);
}