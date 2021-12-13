#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table by index number
 * @ht: The hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i = 0;
	unsigned long int max = ht->size;
	hash_node_t *t_n;
	int did_print = 0;

	if (!ht)
		return;

	printf("{");
	while (i < max)
	{
		t_n = ht->array[i];
		for (; t_n; t_n = t_n->next)
		{
			if (t_n->key != NULL)
			{
				if (did_print == 0)
				{
					printf("'%s': '%s'", t_n->key, t_n->value);
					did_print = 1;
				}
				else
					printf(", '%s': '%s'", t_n->key, t_n->value);
			}
		}
		i++;
	}
	printf("}\n");
}
