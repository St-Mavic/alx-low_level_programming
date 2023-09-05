#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content:  pointer to a string
 * containing the text to be appended.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, mode);

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
