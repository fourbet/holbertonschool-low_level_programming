#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strlen - count length of string
 * @s: string given
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to a pointer to a list_t
 *
 * @str: const string
 *
 * Return: the adress of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
