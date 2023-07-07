#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, elements = 0;
	hash_node_t *p;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		p = ht->array[index];
		while (p)
		{
			if (elements)
				printf(", ");
			printf("\'%s: %s\'", p->key, p->value);
			p = p->next;
			elements++;
		}
	}
	printf("}\n");
}
