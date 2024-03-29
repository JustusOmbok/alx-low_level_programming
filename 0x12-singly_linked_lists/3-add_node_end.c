#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of the end of list_t list
 * @head: struct list_t, node
 * @str: to be duplicated
 * Return: address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}

/**
 * _strlen - returns length of string
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
