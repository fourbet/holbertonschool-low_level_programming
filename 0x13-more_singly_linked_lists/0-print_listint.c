#include "lists.h"

/**
 * print_listint - prints all the elemnts of a listint_t list
 *
 * @h: listint_h
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
