#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array;
	unsigned long int count;
	hash_node_t *current;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	array = ht->array;
	while (count < ht->size)
	{
		current = array[count];
		while (current != NULL)
		{
			tmp = current;
			current = current->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
		free(current);
		count++;
	}
	free(array);
	free(ht);
}
