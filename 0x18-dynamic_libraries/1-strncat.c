#include "main.h"

/**
 * _strncat - function to concatenate two strings
 *
 * @dest: type char, pointer to char variable to be added to
 * @src: pointer type char.
 * @n: type int
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int  i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
