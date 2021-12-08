#include "lists.h"

/**
 * print_dlistint - Prints the numbers of a dlistint doubly linked list
 * @h: The head of the doubly linked list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++, h = h->next)
		printf("%d\n", h->n);

	return (i);
}
