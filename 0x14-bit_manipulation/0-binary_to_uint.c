#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to integer
 * @b: binary string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		if (*b == '1')
			result += 1;

		b++;
	}

	return (result);
}
