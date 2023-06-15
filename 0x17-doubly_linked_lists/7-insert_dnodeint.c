#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at given index
 * @h: start of list
 * @idx: index to insert the value
 * @n: value to insert
 * Return: node that was inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
		idx--;
	}

	if (current == NULL)
		return (NULL);


	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return new_node;
}
