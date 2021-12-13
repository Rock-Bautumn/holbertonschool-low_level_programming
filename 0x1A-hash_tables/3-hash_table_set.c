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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_element, *element = ht->array[index];

	if (key == NULL)
		return (0);

	new_element = malloc(sizeof(hash_node_t) * 1);

	if (!new_element)
		return (0);
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;

	if (element == NULL)
	{
		ht->array[index] = new_element;
		return (1);
	}
	else
	{
		while (element)
		{
			if ((strcmp(ht->array[index]->key, new_element->key)) == 0)
			{
				free(element->value);
				element->value = strdup(value);
				free(new_element->key);
				free(new_element->value);
				free(new_element);
				return (1);
			}
			element = element->next;
		}
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	}
	return (1);
}
