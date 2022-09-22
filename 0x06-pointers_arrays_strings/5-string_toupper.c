#include "main.h"

/**
 * string_toupper - fn to change lowercase letters to uppercase
 *
 * @s: entry string
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 96 && *s < 122)
		{
			*s -= 32;
		}
		s++;
	}

	return (str);
}
