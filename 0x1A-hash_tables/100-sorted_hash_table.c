#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a new sorted hash table
 * @size: The size of the hash table (array)
 *
 * Return: Pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!(ht->array))
		return (NULL);
	memset(ht->array, 0, sizeof(shash_node_t *) * size);

	ht->size = size;
	ht->shead = (NULL);
	ht->stail = (NULL);

	return (ht);
}

/**
 * shash_table_set - Adds a new element to the hash table
 * @ht: Pointer to the hash table
 * @key: The string key of the element
 * @value: The string value of the element
 *
 * Return: 1 on success. 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *hn, *p;
	int index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	hn = malloc(sizeof(shash_node_t));
	if (!hn)
		return (0);
	hn->key = strdup(key);
	hn->value = strdup(value);
	if (!hn->key || !hn->value)
	{
		free_shash_node(hn);
		return (0);
	}
	hn->next = NULL;
	hn->snext = NULL;
	hn->sprev = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		p = ht->array[index];
		while (p)
		{
			if (strcmp(p->key, key) == 0)
			{
				free(p->value);
				p->value = hn->value;
				hn->value = NULL;
				free_shash_node(hn);
				return (1);
			}
			p = p->next;
		}
		hn->next = ht->array[index];
	}
	ht->array[index] = hn;
	insert_node_sList(ht, hn);
	return (1);
}

/**
 * shash_table_get - Return the value of an element from a hash table
 * @ht: Pointer to the hash_table
 * @key: The key of the element
 *
 * Return: The value of the element
 */
char *shash_table_get(shash_table_t *ht, const char *key)
{
	shash_node_t *p;
	unsigned long int index;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		p = ht->array[index];
		while (p)
		{
			if (strcmp(p->key, key) == 0)
				return (p->value);
			p = p->next;
		}
	}
	return (NULL);
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 * @ht: The hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *p;
	int elements = 0;

	if (!ht)
		return;

	printf("{");

	p = ht->stail;
	while (p)
	{
		if (elements)
			printf(", ");
		printf("\'%s\': \'%s\'", p->key, p->value);
		p = p->sprev;
		elements = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *p;
	int elements = 0;

	if (!ht)
		return;

	printf("{");
	p = ht->shead;

	while (p)
	{
		if (elements)
			printf(", ");
		printf("\'%s\': \'%s\'", p->key, p->value);
		p = p->snext;
		elements = 1;
	}
	printf("}\n");
}

/**
 * insert_node_sList - Insert a not into a the sorted list of a shash_tablet
 * @ht: Pointer to the hash table
 * @hn: Pointer to the hash node
 *
 * Return: 1 on success. Otherwise 0 on failure
 */
int insert_node_sList(shash_table_t *ht, shash_node_t *hn)
{
	shash_node_t *cur, *prv;

	if (!ht || !hn)
		return (0);

	if (ht->shead == NULL)
	{
		ht->shead = hn;
		ht->stail = hn;
		return (1);
	}

	cur = ht->shead;
	while (cur)
	{
		if (strcmp(hn->key, cur->key) <= 0)
		{
			if (cur->sprev)
			{
				hn->sprev = cur->sprev;
				(cur->sprev)->snext = hn;
			}
			else
				ht->shead = hn;
			hn->snext = cur;
			cur->sprev = hn;
			return (1);
		}
		prv = cur;
		cur = cur->snext;
	}
	hn->sprev = prv;
	prv->snext = hn;
	ht->stail = hn;
	return (1);
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *p, *p_tmp;

	if (!ht)
		return;

	p = ht->shead;
	while (p)
	{
		p_tmp = p;
		p = p->snext;
		free_shash_node(p_tmp);
	}

	free(ht->array);
	free(ht);
}

/**
 * free_shash_node - Frees a shash_node_t
 * @hn: The hash node to be freed
 *
 * Return: Nothing.
 */
void free_shash_node(shash_node_t *hn)
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
