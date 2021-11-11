#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the elements of a listint_t linked list
 * @h: head node of the linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *thisNode = (listint_t *)h;
	size_t nodequantity = 0;

	while (thisNode)
	{
		nodequantity++;
		thisNode = thisNode->next;
	}
	return (nodequantity);
}
