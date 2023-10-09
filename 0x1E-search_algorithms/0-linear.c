#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: First index where the value is got
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
