#include "hash_tables.h"

/**
 * hash_table_get - Gets a value from a hash table using a key
 * @ht: The hash table
 * @key: They key
 * Return: The value of the key, aka the datum, or NULL if failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *this_node = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	this_node = ht->array[index];
	for (; this_node != NULL; this_node = this_node->next)
	{
		if (strcmp(key, this_node->key) == 0)
			return (this_node->value);
	}

	return (NULL);
}
