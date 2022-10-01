#include "main.h"
/**
 * _islower - check for lower case character
 *
 * @c: character to be tested
 *
 * Return: 1 if the character c is lower case
 * 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
