#include "lists.h"

/**
 * pop_listint - deletes head
 *
 * @head: pointer to head node
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		int data = (*head)->n;
		listint_t *next_node = (*head)->next;

		free(*head);
		*head = next_node;
		return (data);
	}
}
