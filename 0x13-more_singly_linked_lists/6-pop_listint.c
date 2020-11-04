#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to a pointer to a listint_t
 *
 * Return: returns the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *previous;
	int res = 0;

	if (head == NULL)
		return (0);

	previous = *head;
	if (previous)
	{
		res = previous->n;
		if (*head != NULL)
			*head = previous->next;
		free(previous);
	}
	return (res);
}
