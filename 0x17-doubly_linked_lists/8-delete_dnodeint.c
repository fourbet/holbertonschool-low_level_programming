#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 *
 * @head: pointer to a pointer to a dlistint_t
 * @index: int
 *
 * Return: 1 (SUCESS), -1 (FAILLURE)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = NULL;
	dlistint_t *previous = NULL;
	dlistint_t *next = NULL;

	current = *head;
	while (current->next)
	{
		if (count == index)
		{
			if (index == 0)
			{
				if (current->next)
				{
					next = current->next;
					next->prev = NULL;
					*head = next;
				}
				else
					*head = NULL;
				return (1);
			}
			next = current->next;
			previous->next = current->next;
			next->prev = previous;
			return (1);
		}
		previous = current;
		current = current->next;
		count++;
	}
	if (index == count && previous)
	{
		previous->next = NULL;
		return (1);
	}
	return (-1);
}
