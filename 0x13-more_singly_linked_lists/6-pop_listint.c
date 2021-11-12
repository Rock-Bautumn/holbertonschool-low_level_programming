#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - delete and return the head node of a listint_t linked list
 * @head: head node of the linked list
 * Return: the data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *thisNode;
	listint_t *nextNode;
	int popdata = 0;

	if (!head || !(*head)->n)
		return (0);
	thisNode = *head;
	*nextNode = thisNode->next;
	popdata = thisNode->n;
	free(thisNode);
	*head = nextNode;
	return (popdata);
}
