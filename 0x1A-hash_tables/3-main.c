#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int this_key;
    

	ht = hash_table_create(1024);
	hash_table_set(ht, "stylist", "subgenera");
	printf("Key index of stylist is %lu\n", key_index((const unsigned char *)"stylist", 1024));
	printf("Key index of subgenera is %lu\n", key_index((const unsigned char *)"subgenera", 1024));

	this_key = key_index((const unsigned char *)"stylist", 1024);

	printf("%s\n", ht->array[this_key]->value);
	return (0);
}
