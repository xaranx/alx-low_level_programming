#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write_bytes, read_bytes;
	char *buff;
	int fd;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	read_bytes = read(fd, buff, letters);
	if (read_bytes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (write_bytes);
}
