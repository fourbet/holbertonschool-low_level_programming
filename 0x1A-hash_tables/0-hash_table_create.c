#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly creates hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab;

	hash_tab = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab == NULL)
		return (NULL);
	return (hash_tab);
}
