#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list
 * @list: The list to be searched
 * @size: Size of the list
 * @value: The value to look for
 * 
 * Return: The pointer to the value
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    listint_t *current = list;
    listint_t *prev = NULL;
    size_t i = 0;

    while (current->next && current->n < value)
    {
        prev = current;
        for (i = 0; i < step; i++)
        {
            if (current->next)
                current = current->next;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->next)
            prev = prev->next;
        else
            break;
    }

    if (!prev || prev->n > value)
        return (NULL);

    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
    if (prev->n == value)
        return (prev);
    return (NULL);
}
