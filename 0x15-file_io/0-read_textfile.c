#include "main.h"

/**
 * read_textfile - fn that reads a text file and prints it to the POSIX std
 * @letters: number of letters it should read
 * @filename: pointer to the name of the file
 * Return: number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
