#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deletes node from index pos in listint_t list
 * @idx: node of the linked list to insert
 * @head: the head of the linked list
 * Return: the address of the new element, or NULL if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *thisNode = *head;
	listint_t *nextNode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(thisNode);
		return (1);
	}
	while (thisNode->next != NULL && i < index - 1)
	{
		if (thisNode->next == NULL)
			return (-1);
		thisNode = thisNode->next;
		i++;
	}
	nextNode = thisNode->next;
	thisNode->next = nextNode->next;
	free(nextNode);
	return (1);
}
