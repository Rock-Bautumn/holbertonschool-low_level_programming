#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table by index number
 * @ht: The hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i = 0;
	hash_node_t *t_n;
	int did_print = 0;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		t_n = ht->array[i];
		for (; t_n != NULL; t_n = t_n->next)
		{
			if (did_print == 1)
				printf(", ");
			printf("'%s': '%s'", t_n->key, t_n->value);
			did_print = 1;
		}
	}
	printf("}\n");
}
