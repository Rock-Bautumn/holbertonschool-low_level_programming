#include "hash_tables.h"


void shash_sorted_insert(shash_table_t *ht, shash_node_t *add_node)
{
	shash_node_t *t_n = ht->shead, *prev_head, *next_node, *prev_node;

	if (t_n == NULL)
	{
		ht->shead = add_node;
		ht->stail = add_node;
		add_node->snext = NULL;
		add_node->sprev = NULL;
		return;
	}
	if (strcmp(add_node->key, t_n->key) < 0)
	{
		prev_head = ht->shead;
		prev_head->sprev = add_node;
		ht->shead = add_node;
		add_node->snext = prev_head;
		return;
	}

	prev_node = t_n;
	t_n = t_n->snext;
	while (t_n != NULL)
	{
		if (strcmp(add_node->key, t_n->key) < 0)
		{
			prev_node = t_n->sprev;
			next_node = t_n;
			prev_node->snext = add_node;
			next_node->sprev = add_node;
			add_node->snext = next_node;
			add_node->sprev = prev_node;
			return;
		}
		prev_node = t_n;
		t_n = t_n->snext;
	}
	prev_node->snext = add_node;
	add_node->sprev = prev_node;
	add_node->snext = NULL;
	ht->stail = add_node;
}

/*
	snext of prev_node becomes add_node
	sprev of next_node becomes add_node
	add_node snext becomes next_node
	add node sprev becomes prev_node

*/


/**
 * shash_table_create - Creates a hash table of size "size"
 * @size: Number of cells in the hash table
 * Return: The address of the new hash table, NULL if failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table_holder;
	shash_node_t **new_hash_table;
	unsigned long i = 0;

	/* shash_table_t is really a struct that holds hash table array */
	new_hash_table_holder = malloc(sizeof(shash_table_t));
	if (new_hash_table_holder == NULL)
		return (NULL);
	new_hash_table_holder->size = size;
	new_hash_table_holder->shead = NULL;
	new_hash_table_holder->stail = NULL;

	/* make the actual hash table array inside hash_table_t */
	new_hash_table = malloc(sizeof(shash_node_t *) * size);
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

/**
 * hash_table_set - Adds an element to a hash table
 * @ht: The hash table
 * @key: The key of the datum
 * @value: The datum of the datum; the information to store
 * Return: 1 if success, 0 if failed
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *prev_head, *t_n;
	unsigned long int this_index;

	if (key == NULL || value == NULL)
		return (0);
	if (strlen(key) < 1)
		return (0);
	if (ht == NULL)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	this_index = key_index((const unsigned char *)key, ht->size);

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}

	shash_sorted_insert(ht, new_node);

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

/**
 * shash_table_get - Gets a value from a hash table using a key
 * @ht: The hash table
 * @key: The key
 * Return: The value of the key, aka the datum, or NULL if failed
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *this_node = NULL;
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
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *t_n = ht->shead;

	if (ht == NULL || ht->shead == NULL)
		return;

	printf("{");
	while (t_n != NULL)
	{
		printf("'%s': '%s'", t_n->key, t_n->value);
		/*
		printf("\n\nThis node is %p\nNext node is %p\n", (void *) t_n, (void *) t_n->snext);
		*/
		if (t_n->snext != NULL)
			printf(", ");
		t_n = t_n->snext;
	}
	printf("}\n");
}
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *t_n = ht->stail;

	if (ht == NULL || ht->stail == NULL)
		return;
	printf("{");
	while (t_n != NULL)
	{
		printf("'%s': '%s'", t_n->key, t_n->value);
		if (t_n->sprev != NULL)
			printf(", ");
		t_n = t_n->sprev;
	}
	printf("}\n");
}
void shash_table_delete(shash_table_t *ht)
{
	(void) ht;
}
