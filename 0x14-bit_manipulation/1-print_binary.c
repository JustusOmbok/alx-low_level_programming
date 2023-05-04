#include "main.h"

/**
 * print_binary - prints binary
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(unsigned long int) * 8 - 1;
	int printed = 0;

	while (bits >= 0)
	{
		if ((n >> bits) & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
			_putchar('0');

		bits--;
	}

	if (!printed)
		_putchar('0');
}

