#include "main.h"
/**
 * flip_bits - number of bits
 * @n: first number
 * @m: second number
 * Return: bits neeed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
