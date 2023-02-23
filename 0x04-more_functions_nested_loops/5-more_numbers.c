#include "main.h"

/**
 * more_numbers - print numbers 0 to 14, 14 inl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		i = 0;
		while (i <= 10)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}


