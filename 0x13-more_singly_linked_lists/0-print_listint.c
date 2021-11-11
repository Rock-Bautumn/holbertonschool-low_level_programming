#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print out the elements of a list_t linked list
 * @h: head node of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *thisNode = (listint_t *)h;
	size_t nodequantity = 0;

	while (thisNode)
	{
		printf("%d\n", thisNode->n);
		nodequantity++;
		thisNode = thisNode->next;
	}
	return (nodequantity);
}
