#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements of a list_t linked list
 * @h: head node of the linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	list_t *thisNode = (list_t *)h;
	size_t nodequantity = 0;

	while (thisNode)
	{
		nodequantity++;
		thisNode = thisNode->next;
	}
	return (nodequantity);
}
