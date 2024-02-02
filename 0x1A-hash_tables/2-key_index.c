#include "hash_tables.h"

/**
 * key_index - function that gives you d index of a key.
 *
 * @key: is d key
 * @size: is the size of the array of d hash table
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_key;

	index_key = (hash_djb2(key)) % size;
	return (index_key);

}
