#include "hash_tables.h"

/**
 * key_index - Returns the index of the key. i.e. the index at which the node
 * is to be stored in the array of the hash table
 * @key: The key of the node
 * @size: The size of the hash table array
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
