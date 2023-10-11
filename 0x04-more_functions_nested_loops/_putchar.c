#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * return: On success 1.
 * On error, -1 is returned, and erno is set appropriatel
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}

