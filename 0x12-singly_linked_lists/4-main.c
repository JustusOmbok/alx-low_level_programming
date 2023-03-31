#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
