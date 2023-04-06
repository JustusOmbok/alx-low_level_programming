#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at give index
 * @n: the unsigned long int to be changed
 * @index: index to change to zero
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int value;

	if (index > 63 || !n)
		return (-1);
	value = 1 << index;
	*n = (*n & ~value) | ((0 << index) & value);
	return (1);
}
