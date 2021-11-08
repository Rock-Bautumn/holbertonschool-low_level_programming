#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - add a node to the beginning of a list_t linked list
 * @h: head node of the linked list
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int newnodelen = 0;
	list_t *newNode;

	if (!head || !str)
		return (NULL);

	/* make the new node */
	/* our first malloc memleak challenger */
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	/* strdup does malloc too */
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode->str);
		free(newNode);
		return (NULL);
	}

	/* do the length part, strlen is not allowed */
	while (newNode->str[newnodelen])
		newnodelen++;
	newNode->len = newnodelen;

	/* insert the newNode as the head */
	/* we have to set newNode->next first or else we lose head (no copy) */
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
