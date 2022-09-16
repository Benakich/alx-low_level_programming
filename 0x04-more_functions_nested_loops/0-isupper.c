#include "main.h"

/**
* _isupper - check for uppercase letters
* @c: int to be tested
* Return: 1 if uppercase 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
