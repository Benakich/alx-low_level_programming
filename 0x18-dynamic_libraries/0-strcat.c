#include "main.h"

/**
 * _strcat - function to concatenate two strings
 *
 * @dest: type char, pointer to char variable to be added to
 * @src: pointer type char.
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int  i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
		;
	}

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
