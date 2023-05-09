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
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	copy_file_content(av[1], av[2]);
	return (0);
}

int copy_file_content(const char *file_from, const char *file_to)
{
	int fd1, fd2, r = 1, w, c;
	char buf;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(98);
	}

	while (r)
	{
		r = read(fd1, &buf, 1);
		if (r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (!r)
			break;
		w = write(fd2, &buf, 1);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(98);
		}
	}
	c = close(fd1);
	if (c == -1)
	{
		dprintf(2, "Can't clode fd %d\n", fd1);
		exit(98);
	}
	c = close(fd2);
	if (c == -1)
	{
		dprintf(2, "Can't clode fd %d\n", fd2);
		exit(98);
	}
	return (1);
}
