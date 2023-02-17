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
	hash_node_t *new_node = NULL, *prev_head, *t_n;
	unsigned long int this_index;

	if (key == NULL || value == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	if (ht == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	this_index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[this_index] == NULL)
		ht->array[this_index] = new_node;
	else
	{
		prev_head = ht->array[this_index];
		for (t_n = prev_head; t_n != NULL; t_n = t_n->next)
		{
			if (strcmp(key, t_n->key) == 0)
			{
				free(t_n->value);
				t_n->value = strdup(value);
				free(new_node->value);
				free(new_node->key);
				free(new_node);
				return (1);
			}
		}
		new_node->next = prev_head;
		ht->array[this_index] = new_node;
	}
	return (1);
}
