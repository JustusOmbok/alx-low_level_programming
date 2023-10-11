#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - inserts at given index
 * @head: start of list
 * @index: index to insert value
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	while (index > 0)
	{
		if (current == NULL)
			return (-1);

		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
