#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array
 * @array: Array to be searched
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: The index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	unsigned int pos;


	while (array)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%u] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
