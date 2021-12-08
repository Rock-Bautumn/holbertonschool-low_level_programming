#include "lists.h"

/**
 * dlistint_len - Gets the number of nodes in a dlistint_t dlinked list
 * @h: The head of the dlistint_t doubly linked list
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
		i++;

	return (i);
}
