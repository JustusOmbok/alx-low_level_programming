#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */

int grt_endianness(void)
{
	int value = 1;
	char *ptr = (char*)&value;


	if (*ptr == 1)
	{
		return (1);
