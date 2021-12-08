#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: The head node of the dlistint_t doubly linked list
 * @index: The node number to retrieve, starting at 0
 * Return: The node that is at position index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *this_node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	this_node = head;
	while (this_node)
	{
		if (i == index)
			return (this_node);
		this_node = this_node->next;
		i++;
	}
	return (NULL);

}
