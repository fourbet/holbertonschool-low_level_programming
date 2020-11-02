#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 *
 * @head: pointer to a pointer to a listint_h
 *
 * @idx: index of the list where the new node should be added
 *
 * @n: value
 *
 * Return: adress of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *previous;
	listint_t *new;
	unsigned int count = 0;

	current = *head;
	while (current)
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			new->n = n;
			new->next = current;
			previous->next = new;
		}
		previous = current;
		current = current->next;
		count++;
	}
	return (NULL);
}
