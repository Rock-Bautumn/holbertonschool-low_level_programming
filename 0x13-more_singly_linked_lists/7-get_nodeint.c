#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - return the addr of nth node of a lisint_t list
 * @head: the address of the first node
 * @index: index of the node we want, starting at 0
 * Return: the address of the indexth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *thisNode = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	while (thisNode)
	{
		if (i == index)
			return (thisNode);
		i++;
		thisNode = thisNode->next;
	}
	if (i < index)
		return (NULL);
	return (thisNode);
}
