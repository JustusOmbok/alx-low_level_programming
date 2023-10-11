#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: file name
 * @text_content: content to appent
 * Return: if success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length;
	struct stat st;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (fstat(fd, &st) == -1)
	{
		close(fd);
		return (-1);
	}

	length = strlen(text_content);
	bytes_written = write(fd, text_content, length);
	close(fd);

	if (bytes_written == -1 || bytes_written != length)
		return (-1);

	return (1);
}
