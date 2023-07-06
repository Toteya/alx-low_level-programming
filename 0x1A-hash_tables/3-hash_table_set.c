#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to a hash_table
 * @ht: the hash table in which to add the element
 * @key: The (string) key of the element (may not be an empty string)
 * @value: The value of the element
 *
 * Return: 1 on success. 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned long int index;

	if (!key || strcmp(key, "") == 0)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->next = NULL;
	hn->key = strdup(key);
	if (!(hn->key))
	{
		free(hn);
		return (0);
	}
	hn->value = strdup(value);
	if (!(hn->value))
	{
		free(hn->key);
		free(hn);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		hn->next = ht->array[index];
	}
	ht->array[index] = hn;

	return (1);
}
