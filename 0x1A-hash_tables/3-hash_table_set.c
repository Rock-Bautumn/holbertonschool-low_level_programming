#include "hash_tables.h"

/**
 * free_ht_node - Frees a hash_node_t from memory
 * @hash_node: - The hash_node_t to deallocate
 * Return: void
 */

void free_ht_node(hash_node_t *hash_node)
{
	free(hash_node->key);
	free(hash_node->value);
	free(hash_node);
}

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table
 * @key: The key of the datum
 * @value: The datum of the datum; the information to store
 * Return: 1 if success, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *prev_head = NULL;
	hash_node_t *this_node = NULL;
	unsigned long int this_key_index;

	if (ht == NULL || key == NULL || strlen(key) <= 0 || value == NULL)
		return (0);
	/* Initialize the new node, return fail (0) if we can't malloc */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* Save the key index in memory so we don't waste time with calls */
	this_key_index = key_index((const unsigned char *) key, ht->size);
	/* Save the node in the spot if it's free, otherwise insert node */
	if (ht->array[this_key_index] == NULL)
		ht->array[this_key_index] = new_node;
	else
	{
		prev_head = ht->array[this_key_index];
		this_node = prev_head;
		while (this_node)
		{
			if (strcmp(this_node->key, key) == 0)
			{
				free(this_node->value);
				this_node->value = strdup(value);
				free_ht_node(new_node);
				return (1);
			}
		}
		this_node->next = prev_head;
		ht->array[this_key_index] = new_node;
	}
	return (1);
}