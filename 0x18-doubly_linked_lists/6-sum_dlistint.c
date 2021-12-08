#include "lists.h"

/**
 * sum_dlistint - Adds all of the elements of the dlistint list
 * @head: The head of the dlistint_t doubly linked list
 * Return: The sum of the elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *this_node = head;

	if (head == NULL)
		return (sum);

	while (this_node)
	{
		sum += this_node->n;
		this_node = this_node->next;
	}

	return (sum);

}
