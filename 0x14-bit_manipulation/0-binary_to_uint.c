#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to string of 0 nd 1 as chars
 *
 * Return: converted number if success, 0 if string has neither 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
