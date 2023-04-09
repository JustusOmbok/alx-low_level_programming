#include <stdio.h>
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
	if (filename == NULL)
	{
		return (0);
	}
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	char *buffer = (char *) malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	ssize_t read_count = fread(buffer, sizeof(char), letters, file);

	if (ferror(file) || read_count != letters)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	ssize_t write_count = fwrite(buffer, sizeof(char), read_count, stdout);

	if (write_count != read_count)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (read_count);
}
