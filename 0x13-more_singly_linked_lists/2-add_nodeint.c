#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add a node to the beginning of a listint_t linked list
 * @head: head node of the linked list
 * @n: the number to store
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);

	/* make the new node */
	/* our first malloc memleak challenger */
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	/* insert the newNode as the head */
	/* we have to set newNode->next first or else we lose head (no copy) */
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
