#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 *
 * @n: unsigned long int to be searched
 * @index: index to return bit
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
