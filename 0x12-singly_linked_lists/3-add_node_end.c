#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of a list_t linked list
 * @head: head node of the linked list
 * @str: the string data
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *thisNode;
	list_t *newNode;
	unsigned int qstrlen = 0;

	if (!str)
		return (NULL);
	/* make the new node - our first malloc memleak challenger */
	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	/* strdup does malloc too - another challenger for memleak */
	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode->str);
		free(newNode);
		return (NULL);
	}

	while (newNode->str[qstrlen])
		qstrlen++;
	newNode->len = qstrlen++;
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
