#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * @array: Pointer to array's first element
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int jump;

	jump = sqrt(size);


	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump;
	}
	i -= jump;
	printf("Value found between indexes [%d] and [%d]\n", i, i + jump);

	for (; i <= (i + jump) && i < size; i++, jump--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
