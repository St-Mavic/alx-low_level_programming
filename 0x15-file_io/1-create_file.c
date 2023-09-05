#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, write œfails, etc)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t bytes_write = write(fd, text_content, strlen(text_content));

		if (bytes_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
