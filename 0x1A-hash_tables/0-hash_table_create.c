#include "hash_tables.h"

/** 
 * hash_table_t - Creates a new hash table
 * @size: The size of the array
 * Returns: The new created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(char)*size);
	if (ht == NULL)
		return (NULL);
	return (ht);
}
