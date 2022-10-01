/**
 * *_strpbrk - fn that searches a string for any of a set of bytes
 * @s: pointer type char. source string
 * @accept: type char. Pointer to string to be compared.
 *
 * Return: char pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;

	}
	return ('\0');
}
