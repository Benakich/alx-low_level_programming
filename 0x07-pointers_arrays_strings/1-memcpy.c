#include "main.h"

/**
* *_memcpy - fn that copies memory area
* @dest: type char pointer. memory area to be copied to
* @src: memory area to be copied from
* @n: type unsigned int. n bytes of memory to be copied
*
* Return: char pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		src[i] = dest[i];
		n--;
		i++;
	}
	return (dest);
}
