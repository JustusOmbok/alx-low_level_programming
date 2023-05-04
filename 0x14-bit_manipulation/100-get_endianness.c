#include "main.h"
/**
 * get_endianness - endianness is checked
 * Return: if endian is big then 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return (int)*c;
}
