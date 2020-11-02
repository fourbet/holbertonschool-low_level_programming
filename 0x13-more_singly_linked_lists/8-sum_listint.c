#include "lists.h"

/**
 * sum_listint - returns the sum of all n of a listint_t list
 *
 * @head: pointer to a listint_h
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
