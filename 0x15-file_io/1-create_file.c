#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: NULL terminated string to write to the file
 * @text_content: test content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, write_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	write_bytes = write(fd, text_content, length);
	if (write_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
