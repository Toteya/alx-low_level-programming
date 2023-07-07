#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *p, *curr;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		p = ht->array[index];
		while (p)
		{
			curr = p;
			p = p->next;
			free_hash_node(curr);
		}
	}
	free(ht->array);
	free(ht);
}
