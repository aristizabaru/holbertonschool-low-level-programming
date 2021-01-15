#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to get index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	key_index = hash % size;

	return (key_index);
}
