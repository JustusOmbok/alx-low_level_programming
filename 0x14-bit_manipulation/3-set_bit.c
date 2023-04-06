#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that set value of a bit to 1 ata given index
 * @n: unsigned int to change
 * @index: index to change to one
 * Return: 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) *8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
