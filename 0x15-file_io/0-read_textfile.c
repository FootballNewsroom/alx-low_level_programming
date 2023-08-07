#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to STDOUT.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of bytes it could read and print or 0
 * if the file cannot be opened or read, filename is NULL, write fails or does
 * not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buffer, letters);
	if (t == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, t);
	if (w == -1 || w != t)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (w);
}
