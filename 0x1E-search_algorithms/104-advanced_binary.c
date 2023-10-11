#include <stdio.h>
#include "search_algos.h"


/**
 * prints_array - Array is printed within a range
 * @arrs: Array's pointer
 * @starts: The range's starting index
 * @ends: The range's ending index
 */
void prints_array(int *arrs, int starts, int ends)
{
	int i = 0;

	printf("Searching in array: ");
	while (starts <= ends)
	{
		if (i > 0)
			printf(", ");
		i = starts++;
		printf("%d", arrs[i++]);
	}
	printf("\n");
}

/**
 * recursion_search - Searches for a value recursively
 * @arrs: Array's pointer
 * @low: Lower end of the array
 * @high: High end of the array
 * @val: The value to be searched
 *
 * Return: Where the value is located
 */

int recursion_search(int *arrs, int low, int high, int val)
{
	int mid;

	if (high >= low)
	{
		mid = low + (high - low) / 2;
		prints_array(arrs, low, high);

		if (arrs[mid] == val)
		{
			if (mid != 0 && arrs[mid - 1] == val)
				return (recursion_search(arrs, low, mid, val));
			return (mid);
		}

		if (arrs[mid] > val)
			return (recursion_search(arrs, low, mid, val));

		return (recursion_search(arrs, mid + 1, high, val));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Array to search in
 * @size: Size of the array
 * @value: The value to search for
 *
 * Return: Index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array && size)
		return (recursion_search(array, 0, (int)size - 1, value));
	return (-1);
}
