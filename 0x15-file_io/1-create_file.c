#include "main.h"

/**
 * create_file - fn that creates file
 * @filename: name of the file created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure;
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr;
	int len = 0;

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (filename == NULL)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);

}
