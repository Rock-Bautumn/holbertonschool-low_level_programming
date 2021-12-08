#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *this_node = NULL;
	dlistint_t *free_node = NULL;

	this_node = head;

	while (this_node != NULL)
	{
		free_node = this_node;
		this_node = this_node->next;
		free(free_node);
	}
}
