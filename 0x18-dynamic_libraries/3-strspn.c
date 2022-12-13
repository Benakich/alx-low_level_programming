#include "main.h"

/**
* _strspn - fn that gets the length of a prefix substring
*
* @s: string pointer type char
* @accept: pointer to substring to be checked against string s
*
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}
