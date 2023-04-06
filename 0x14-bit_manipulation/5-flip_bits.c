#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, check;

	check = (n ^ m);
	while (check)
	{
		count += (check & 1);
		check >>= 1;
	}
	return (count);
}
