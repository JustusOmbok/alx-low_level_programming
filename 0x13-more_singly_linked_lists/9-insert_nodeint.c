#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the first node
 * @idx: the index of the list where the new node is inserted
 * @n: the integer to be stored in the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	for (i = 0; i < idx - 1; 1++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

