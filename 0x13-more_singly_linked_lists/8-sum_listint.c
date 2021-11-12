#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - return the sum of a listint_t linked list
 * @head: head node of the linked list
 * Return: the sum of the data in the nodes in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *thisNode = head;
	int sum = 0;

	while (thisNode)
	{
		sum += thisNode->n;
		thisNode = thisNode->next;
	}
	return (sum);
}
