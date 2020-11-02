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
	listint_t *current;
	int res = 0;

	if (head)
	{
		current = *head;
		res = current->n;
		*head = current->next;
		free(current);
	}
	return (res);
}
