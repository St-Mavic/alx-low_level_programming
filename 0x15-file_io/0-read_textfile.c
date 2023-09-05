#include "main.h"

/**
 * read_textfile - a function that reads text file
 * @filename: pointer to a filename
 * @letters: number of letters it should read and print
 *
 * Return: 0 or actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_write);
}
