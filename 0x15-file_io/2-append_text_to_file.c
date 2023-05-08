#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: The file name
 * @text_content: Text content to be added to the file
 *
 * Return: 1 on success. -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	return (1);
	close(fd);
}
