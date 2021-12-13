#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table
 * @key: The key of the datum
 * @value: The datum of the datum; the information to store
 * Return: 1 if success, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *oldhead, *tmp;
	unsigned long int hash_index;

	if (key == NULL || value == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	if (ht == NULL)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	hash_index = key_index((const unsigned char *)key, ht->size);

	/* check if value is NULL. if not, make linked list */
	if (ht->array[hash_index] == NULL)
		ht->array[hash_index] = node;
	else
	{
		oldhead = ht->array[hash_index];
		for (tmp = oldhead; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(node->value);
				free(node);
				return (1);
			}
		}
		node->next = oldhead;
		ht->array[hash_index] = node;
	}
	return (1);
}
