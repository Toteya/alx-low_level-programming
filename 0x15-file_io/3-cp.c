#include "main.h"

/**
 * main - Entry point to cp program
 * @ac: Number of command line arguments
 * @av: Array of command line arguments
 *
 * Return: 0 On success.
 */
int main(int ac, char *av[])
{
	int c;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	c = copy_file_content(av[1], av[2]);
	if (c == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	else if (c == -2)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		return (98);
	}
	return (0);
}

/**
 * copy_file_content - Copies the content of a file to another file
 * @file_from: The file from which to copy
 * @file_to: The file to which the content is to be copied
 *
 * Return: 1 on success. -1 (Failed to read), -2 (Failed to write)
 */
int copy_file_content(const char *file_from, const char *file_to)
{
	int fd1, fd2, r = 1;
	char buf;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		return (-2);
	while (r)
	{
		r = read(fd1, &buf, 1);
		if (r == -1)
			return (-1);
		if (!r)
			break;
		if (write(fd2, &buf, 1) == -1)
			return (-2);
	}
	if (close(fd1) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(98);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd2);
		exit(98);
	}
	return (1);
}
