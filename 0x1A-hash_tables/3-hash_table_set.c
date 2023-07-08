#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void free_hash_node(hash_node_t *hn);

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
	hash_node_t *hn, *p;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	
	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->next = NULL;
	hn->key = strdup(key);
	if (!(hn->key))
	{
		free_hash_node(hn);
		return (0);
	}

	hn->value = strdup(value);
	if (!(hn->value))
	{
		free_hash_node(hn);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		p = ht->array[index];
		while (p)
		{
			if (strcmp(key, p->key) == 0)
			{ /* if the key already exists, overwrite the existing value*/
				free(p->value);
				p->value = strdup(value);
				free_hash_node(hn);
				return (1);
			}
			p = p->next;
		}
		hn->next = ht->array[index];
	}
	ht->array[index] = hn;
	return (1);
}

/**
 * free_hash_node - frees a hash_node_t
 * @hn: the hash node element to be freed
 *
 * Return: Nothing.
 */
void free_hash_node(hash_node_t *hn)
{
	if (hn)
	{
		if (hn->key)
			free(hn->key);
		if (hn->value)
			free(hn->value);
		free(hn);
	}
}
