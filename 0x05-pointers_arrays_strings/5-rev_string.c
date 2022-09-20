#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string array
 */

void rev_string(char *s)
{
	int i, j, k;
	char p;

	for (i = 0; s[i] != '\0'; i++)
		;

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		p = s[j];
		s[j] = s[i];
		s[i] = p;
	}
}
