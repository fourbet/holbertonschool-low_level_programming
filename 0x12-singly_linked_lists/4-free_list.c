#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * free_list - frees a list_t list
 *
 * @head: pointer to a list_t
 *
 * Return: the adress of the new element or NULL if failed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head->next != NULL)
	{
		tmp = head;
		free(head->str);
		free(tmp);
		head = head->next;
	}
	free(head->str);
	free(head);
}
