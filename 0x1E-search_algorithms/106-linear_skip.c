#include "search_algos.h"


/**
 * linear_skip - searches a skiplist of two levels for a value
 * @list: The list to search through
 * @value: The value to search for
 * Return: The address of the node with the value found, NULL if not found
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *thisNode = list, *upper;

	if (list == NULL)
		return (NULL);
	while (thisNode->n <= value)
	{
		if (thisNode->n == value)
			return (thisNode);
		if (thisNode->express == NULL)
			break;
		printf("Value checked at index [%lu] = [%d]\n",
			thisNode->express->index, thisNode->express->n);
		if (thisNode->express->n <= value && thisNode->express->index > 0)
			thisNode = thisNode->express;
		else
			break;
	}
	if (thisNode->express != NULL)
		printf("Value found between indexes [%lu] and [%lu]\n",
		thisNode->index, thisNode->express->index);
	else
	{
		upper = thisNode;
		while (upper->next != NULL)
			upper = upper->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		thisNode->index, upper->index);
	}
	while (thisNode->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		thisNode->index, thisNode->n);
		if (thisNode->n == value)
			return (thisNode);
		if (thisNode->next && thisNode->next->n <= value)
			thisNode = thisNode->next;
		else
			return (NULL);
	}
	return (NULL);
}
