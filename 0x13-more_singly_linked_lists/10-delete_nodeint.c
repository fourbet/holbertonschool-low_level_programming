#include "lists.h"

/**
 * delete_nodeint_at_index -  delete a node at a given position
 *
 * @head: pointer to a pointer to a listint_h
 *
 * @index: index of the list where the new node should be added
 *
 * Return: 1 if it succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int count = 0;

	current = *head;
	while (current)
	{
		if (count == index)
		{
			if (index != 0)
				previous->next = current->next;
			else
				*head = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		count++;
	}
	return (-1);
}
