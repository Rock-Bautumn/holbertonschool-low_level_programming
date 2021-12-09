#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at n index from head
 * @head: The head of the dlistint_t doubly linked list
 * @index: The position of the node that is to be deleted
 * Return: 1 if deletion was successful, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *this_node = NULL;
	unsigned int i = 0;

	this_node = *head;
	while (this_node)
	{
		if (i == index)
		{
			if (this_node->prev != NULL)
				this_node->prev->next = this_node->next;
			else
				*head = this_node->next;
			if (this_node->next != NULL)
				this_node->next->prev = this_node->prev;
			free(this_node);
			return (1);
		}
		i++;
		this_node = this_node->next;
	}

	return (-1);
}
