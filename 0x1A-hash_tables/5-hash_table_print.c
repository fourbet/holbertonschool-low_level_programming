#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array;
	unsigned long int count = 0;
	hash_node_t *current;
	int first = 0;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	array = ht->array;
	printf("{");
	while (count < ht->size)
	{
		if (array[count] != NULL)
		{
			current = array[count];
			while (current != NULL)
			{
				if (first == 0)
				{
					printf("'%s': '%s'", current->key, current->value);
					first++;
				}
				else
					printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
		count++;
	}
	printf("}\n");
}
