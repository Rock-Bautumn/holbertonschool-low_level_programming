#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the contents of a hash table by index number
 * @ht: The hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *this_node, *free_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		this_node = ht->array[i];
		while (this_node != NULL)
		{
			free_node = this_node;
			this_node = this_node->next;
			free(free_node->key);
			free(free_node->value);
			free(free_node);
		}
	}
	free(ht->array);
	free(ht);
}
