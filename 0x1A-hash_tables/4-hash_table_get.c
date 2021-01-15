#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to a hash table
 * @key: key
 *
 * Return: value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **array;
	hash_node_t *current;

	if (ht == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	array = ht->array;
	if (array[index] != NULL)
	{
		current = array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (strdup(current->value));
			}
			current = current->next;
		}
	}
	return (NULL);
}
