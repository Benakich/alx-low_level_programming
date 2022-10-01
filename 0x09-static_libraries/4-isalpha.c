#include "main.h"
/**
 * _isalpha - check for alphabetic character
 *
 * @c: character to be tested
 *
 * Return: 1 if the character c is a letter,lowercase or uppercase
 * 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
