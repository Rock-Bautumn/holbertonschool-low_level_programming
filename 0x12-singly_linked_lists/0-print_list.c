#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - print out the elements of a list_t linked list
 * @h: head node of the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *thisNode = (list_t *)h;
	size_t nodequantity = 0;

	while (thisNode)
	{
		if (!thisNode->str)
			printf("[0] (nil)\n");
		else
			printf("%s\n", thisNode->str);

		nodequantity++;
		thisNode = thisNode->next;
	}
	return (nodequantity);
}
