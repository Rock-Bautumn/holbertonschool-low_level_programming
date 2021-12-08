#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct dlistint_struct - The node structure of dlistint_t dlinked list
 * @n: The number value stored in the node
 * @prev: The previous node in the list
 * @next: The next node in the list
 */

typedef struct dlistint_struct
{
	int n;
	struct dlistint_struct *prev;
	struct dlistint_struct *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);



#endif
