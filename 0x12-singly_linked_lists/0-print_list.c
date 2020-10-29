#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print all the elements of a list_t list
 *
 * @h: pointer to a list_t (const)
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	counter++;
	return(counter);
}
