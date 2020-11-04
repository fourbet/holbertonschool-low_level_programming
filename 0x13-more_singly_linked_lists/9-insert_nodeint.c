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
	listint_t *current, *previous, *new;
	unsigned int count = 0, passed = 0;

	current = *head;
	if (current == NULL && idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		*head = new;
		count++;
		passed = 1;
	}
	while (current)
	{
		if (count == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			if (idx != 0)
			{
				previous->next = new;
			}
			else
			{
				*head = new;
			}
			new->next = current;
			passed = 1;
		}
		previous = current;
		current = current->next;
		count++;
	}
	if (passed == 0)
		return (NULL);
	if (count == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n; 
		previous->next = new;
	}
	return (new);
}
