#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of the file
 * @text_content: Null terminated string to add at end of file
 * Return: 1 if success, -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, text_len = 0;

	if (filename == NULL)

		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;


		bytes_written = write(fd, text_content, text_len);

		if (bytes_written != text_len)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
