#include "lists.h"

/**
 * listint_len - returns tje number of elemnts in a listint_t list
 *
 * @h: listint_h
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
