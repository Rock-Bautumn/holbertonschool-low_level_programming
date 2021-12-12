#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table_holder;
	hash_node_t **new_hash_table;
	unsigned long i = 0;

	/* hash_table_t is really a struct that holds hash table array */
	new_hash_table_holder = malloc(sizeof(hash_table_t));
	if (new_hash_table_holder == NULL)
		return (NULL);
	new_hash_table_holder->size = size;

	/* make the actual hash table array inside hash_table_t */
	new_hash_table = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table == NULL)
	{
		free(new_hash_table_holder);
		return (NULL);
	}
	while (i < size)
	{
		new_hash_table[i] = NULL;
		i++;
	}
	new_hash_table_holder->array = new_hash_table;

	return (new_hash_table_holder);
}
