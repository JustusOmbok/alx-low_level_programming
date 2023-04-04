#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node
 * @index: index of the node that should be deleted
 *
 * Return: 1 if suceeded, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	listint_t *current = *head;
	unsigned int i = 0;

	while (i < index - 1)
	{
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
		i++;
	}

	listint_t *tmp = current->next;

	free(tmp);

	return (1);
}
