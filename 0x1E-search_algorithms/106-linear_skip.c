#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: The list to be searched
 * @value: The value to search for
 *
 * Return: Pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	unsigned int low, high;
	skiplist_t *start, *end = list;

	while (end->next && end->n < value)
	{
		start = end;
		if (end->express)
		{
			end = end->express;
			printf("Value checked at index [%d] = [%d]\n", (int)end->index, end->n);
		}
		else
		{
			while (end->next)
				end = end->next;
		}
	}

	low = (int)start->index;
	high = (int)end->index;
	printf("Value found between indexes [%u] and [%u]\n", low, high)

	for (; start && low <= high; low++, start = start->next)
	{
		printf("Value checked at index [%d] = [%d]\n", low, start->n);
		if (start->n == value)
			return (start);
	}

	return (NULL);
}
