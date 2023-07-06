#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves from a hash table the value associated with a key
 * @ht: The hash table to lookup
 * @key: The key
 *
 * Return: The value associated with the key, on success.
 * Otherwise return NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *p;

	if (!key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		p = ht->array[index];
		while (p)
		{
			if (strcmp(key, p->key) == 0)
				return (p->value);
			p = p->next;
		}
	}
	return (NULL);
}
