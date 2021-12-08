#include "lists.h"

/**
 * add_dnodeint_end - Adds a dlistint_t node to the end of the dlinked list
 * @head: The head of the dlistint_t doubly linked list
 * @n: The value to store in the node
 * Return: The address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *this_node = *head;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	this_node = *head;
	while (this_node->next != NULL)
	{
		this_node = this_node->next;
	}
	this_node->next = new_node;
	new_node->prev = this_node;

	return (*head);
}
