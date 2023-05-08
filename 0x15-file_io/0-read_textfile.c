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
	int fd;
       	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buf, letters);
	if (w < r || w == -1)
		return (0);
	free(buf);
	close(fd);
	return (r);
}
