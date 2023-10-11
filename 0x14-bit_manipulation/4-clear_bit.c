#include "main.h"
/**
 * clear_bit - sets bit value to zero
 * @n: number to modify pointer
 * @index: bit to clear index
 * Return: 1 if success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
