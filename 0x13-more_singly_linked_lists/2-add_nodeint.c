#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of the list
 * @head: pointer to a pointer to the first node in the list
 * @n: integer value to store in the new node
 *
 * Return: the address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
