#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the table (number of buckets)
 *
 * Return: Pointer to the hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}

	memset(ht->array, 0, sizeof(ht->array[0]) * size);

	return (ht);
}
