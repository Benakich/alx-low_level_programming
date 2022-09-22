#include "main.h"

/**
 * check_separator - word separator: space, tabulation, new line, ,, ;, ., !, ?, '"', (, ), {, and }
 *
 * @c: input char
 *
 * Return: 1 if separator, 0 otherwise
 */

int check_separator(char c)
{
	int i = 0;
	int j;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '}', '{'};

	for (; i < 13; i++)
	{
		if (c == separators[i])
			j = 1;
		else
			j = 0;
	}
	return (j);

}

/**
 * string_toupper - fn to change lowercase letters to uppercase
 *
 * @s: entry string
 *
 * Return: char pointer to converted string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}
		if (check_separator(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
