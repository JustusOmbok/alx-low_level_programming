#include "lists.h"

/**
 * free_listint - frees the linked list listint_t
 *
 * @head: the head of the linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
