#include "hash_tables.h"
/**
 * add_node - adds a new node at the beginning of a hash_node_t
 *
 * @head: pointer to a pointer to a hash_node_t
 * @key: key
 * @value: value associated to the key
 *
 * Return: the adress of the new element or NULL if failed
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	current = *head;
	if (current)
	{
		while (current->next != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				current->value = strdup(value);
				return (current);
			}
			current = current->next;
		}
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 (SUCCESS), 0 (OTHERWISE)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size;
	hash_node_t **array;

	if (ht == NULL || strcmp(key, "") == 0)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	array = ht->array;
	array[index] = add_node(&array[index], key, value);
	return (1);
}
