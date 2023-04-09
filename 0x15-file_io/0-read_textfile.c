#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @letters: number of letters it should read and print
 * @filename: name of the file
 * Return: actual number of letters if success, 0 if file is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int of;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);
	of = open(filename, O_RDONLY);
	if (of == -1)
	{
		free(buff);
		return (0);
	}

	lRead = read(of, buff, letters);
	if (lRead < 1)
	{
		free(buff);
		close(of);
		return (0);
	}

	check = write(STDOUT_FILENO, buff, lRead);

	free(buff);
	close(of);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}
