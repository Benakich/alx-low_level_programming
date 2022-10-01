#include "main.h"

/**
 * *_memset - fn that fills memory with a constant byte
 * @s: pointer to memorey
 * @b: constant byte b to fill the n bytes of the memory area pointed to by s
 * @n: unsigned int n, no of bytes to be filled
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;

	}
	return (s);
}
