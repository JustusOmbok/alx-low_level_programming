#include "lists.h"

/**
 * sum_dlistint - count all elements
 * @head: start of list
 * Return: sum of n value of each node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
