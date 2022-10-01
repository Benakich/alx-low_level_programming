#include "main.h"

/**
 * _strncpy - fn to copy string from src to dest
 *
 * @dest: type char. string destination to be copied to
 * @src: type char, string to be copied
 * @n: type int, number of entries to be copied
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
