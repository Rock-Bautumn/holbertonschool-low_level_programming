#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - delete a list_t linked list
 * @head: head node of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *thisNode = head;
	list_t *nextNode;

	while (thisNode != NULL)
	{
		nextNode = thisNode->next;
		free(thisNode->str);
		free(thisNode);
		thisNode = nextNode;
	}

	head = NULL;
}
