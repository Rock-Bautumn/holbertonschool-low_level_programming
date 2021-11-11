#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - delete a listint_t linked list
 * @head: head node of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *thisNode;
	listint_t *nextNode;

	if (!head)
		return;
	thisNode = *head;
	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
		free(thisNode);
		thisNode = nextNode;
	}
	/* This is wrong, do not do this */
/* head = NULL; */
	*head = NULL;
}
