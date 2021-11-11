#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint - delete a listint_t linked list
 * @head: head node of the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *thisNode = head;
	listint_t *nextNode;

	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
        	free(thisNode);
		thisNode = nextNode;
	}

	head = NULL;
}
