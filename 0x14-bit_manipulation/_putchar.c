#include <unistd.h>

/**
 * _putchar - character is written to c stdout
 * @c: character
 * Return: 1 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
