#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - add a node to the end of a listint_t linked list
 * @head: head node of the linked list
 * @str: the string data
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *thisNode;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	thisNode = *head;
	/* get to the last node */
	while (thisNode->next != NULL)
	{
		thisNode = thisNode->next;
	}
	thisNode->next = newNode;
	return (newNode);
}
