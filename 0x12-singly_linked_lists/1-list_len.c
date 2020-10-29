#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns the number of elements of a list_t list
 *
 * @h: pointer to a list_t (const)
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
