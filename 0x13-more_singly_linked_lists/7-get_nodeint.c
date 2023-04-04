#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to the head node
 * @index: index of the node to retrieve(starting at 0 node
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	for (unsigned int i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	return (current);
}
