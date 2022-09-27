/**
* *_strstr - fn that locates a substring
*
* @haystack: string pointer type char
* @needle: string pointer type char
*
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
					}
		haystack++;
	}

	return ('\0');
}
