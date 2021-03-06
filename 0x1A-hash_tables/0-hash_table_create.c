#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly creates hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab = NULL;
	unsigned long int i = 0;

	hash_tab = malloc(sizeof(hash_table_t));
	if (hash_tab == NULL)
		return (NULL);
	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		hash_tab->array[i] = NULL;
	}
	return (hash_tab);
}
