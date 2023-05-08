#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The file name
 * @text_content: The content to be written to the file
 *
 * Return: 1 (SUCCESS), -1 (FAIL)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, c;

	(void) text_content;
	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	c = write(fd, text_content, strlen(text_content));
	if (c == -1)
		return (-1);
	close(fd);
	return (1);
}
