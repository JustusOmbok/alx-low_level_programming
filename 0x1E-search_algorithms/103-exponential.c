#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * @array: The array to be searched
 * @size: Number of elements in the array
 * @value: The value to search
 *
 * Return: Index where the value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound = 1; int low; int high; int mid; int i;

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < ((int)size - 1) ? bound : ((int)size - 1));
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
	
