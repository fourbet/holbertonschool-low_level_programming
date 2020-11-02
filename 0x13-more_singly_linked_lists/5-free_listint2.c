#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to a pointer to a listint_h
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	current = *head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
