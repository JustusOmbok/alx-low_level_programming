#include "main.h"
/**
 * get_bit - value of bit is returned
 * @n: number to be returned
 * @index: index of the bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
