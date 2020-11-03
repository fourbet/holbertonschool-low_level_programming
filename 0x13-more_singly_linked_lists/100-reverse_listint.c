#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 *@head: pointer to a listint_t
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *previous;

	current = *head;
	previous = NULL;
	while (current)
	{
		*head = current->next;
		current->next = previous;
		previous = current;
		current = *head;
	}
	*head = previous;
	return (*head);
}
