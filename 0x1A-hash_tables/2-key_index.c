#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The given key
 * @size: The size of the table
 * Return: The index at which the key/value pair should be stored\
 * 	 in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
