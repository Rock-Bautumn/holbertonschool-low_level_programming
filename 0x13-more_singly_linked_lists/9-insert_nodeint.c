#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * insert_nodeint_at_index - inserts node into index pos in listint_t list
 * @idx: node of the linked list to insert
 * @head: the head of the linked list
 * @n: the number to store
 * Return: the address of the new element, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *thisNode;
	listint_t *newNode;
	listint_t *nextNode;
	unsigned int i = 0;

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
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	while (thisNode->next != NULL && i <= idx)
	{
		if (i == idx - 1)
		{
			nextNode = thisNode->next;
			thisNode->next = newNode;
			newNode->next = nextNode;
			return (newNode);
		}
		i++;
		thisNode = thisNode->next;
	}
	return (NULL);
}
