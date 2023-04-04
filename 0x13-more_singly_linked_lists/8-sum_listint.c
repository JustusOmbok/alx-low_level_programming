#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * @head: pointer to head of the linked list
 *
 * Return: the sum of all the data (n) of a listint linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
