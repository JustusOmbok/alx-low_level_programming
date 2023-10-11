#include "main.h"
#define BUFSIZE 1024
#define PERMS 0664

void print_error(int code, char *filename);

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t nread;
	char buf[BUFSIZE];
	mode_t mode = PERMS;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}


	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		print_error(99, argv[2]);
	}

	while ((nread = read(fd_from, buf, BUFSIZE)) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			print_error(99, argv[2]);
		}
	}

	if (nread == -1)
	{
		print_error(98, argv[1]);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}

	return 0;
}

void print_error(int code, char *filename)
{
	if (code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}
	else if (code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	}
	exit(code);
}
