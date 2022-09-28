#include "main.h"

/**
* _strlen_recursion - fn that returns the length of a string
* @s: string pointer type char
*
* Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
