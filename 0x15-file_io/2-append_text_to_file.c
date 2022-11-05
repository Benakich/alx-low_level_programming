#include "main.h"

/**
 * append_text_to_file - fn that appends text at the end of a file
 * @filename: pointer to filename
 * @text_content: pointer to text to append
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
