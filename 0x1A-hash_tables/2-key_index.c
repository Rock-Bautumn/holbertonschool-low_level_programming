#include "hash_tables.h"

/**
 * key_index - Gets the index of a hash
 * @key: The hash
 * @size: The size of the array/table
 * Return: The index of the key/hash in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
