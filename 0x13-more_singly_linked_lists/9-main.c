#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	print_listint(head);
	printf("----------\n");
	insert_nodeint_at_index(&head, 5, 4096);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
