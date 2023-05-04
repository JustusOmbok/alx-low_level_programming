#include "main.h"
/**
 * set_bit - bit value set to 1
 * @n: number to modify pointer
 * @index: bit to set index
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
