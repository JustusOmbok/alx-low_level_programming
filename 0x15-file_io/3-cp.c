#include "main.h"

/**
 * error_exit - prints error message, exits with a code
 * @code: error code to exit with
 * @msg: error message to be printed
 */

void error_exit(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - copy file contents to another file
 * @argc: number of arguments passed to the programme
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success, error code if failure
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, ret;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((ret = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, ret) != ret)
			error_exit(99, "Error: Can't write to file");
	}

	if (ret == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
