#include "main.h"

/**
 * read_textfile - Reads the specified first letters of a text file.
 * @filename: The filename
 * @letters: The numbers of letters to be read from the file
 *
 * Return: The actual number of letters read (if successful).
 * Otherwise, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, c = 0;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	c = read(fd, buf, letters);
	if (c == -1)
		return (0);
	write(STDOUT_FILENO, buf, letters);
	free(buf);
	close(fd);
	return (c);
}
