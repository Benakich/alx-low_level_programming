#include "main.h"
#include <stddef.h>

/**
* *_strchr - fn that locates a character in a string
* @s: type char pointer to a string s
* @c: char to be searched for
*
* Return: pointer type char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
