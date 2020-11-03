#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 *@head: pointer to a listint_t
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t  *p;
	listint_t *q;
	listint_t *begin;
	int loop = 0;

	p = (listint_t *) head;
	q = (listint_t *) head;
	begin = (listint_t *) head;
	while (head)
	{
		if (loop == 2 && (p == q))
		{
			printf("-> [%p] %d\n\n", (void *) p, p->n);
			return (count);
		}
		if ((p == q) && count != 0)
		{
			loop = 1;
			p = begin;
			if (p == q)
			{
				printf("-> [%p] %d\n\n", (void *) p, p->n);
				return (count);
			}
			loop = 2;
		}
			count++;
			printf("[%p] %d\n", (void *) q, q->n);
			q = q->next;
			if (p)
			{
				p = p->next;
				if (p && loop == 0)
					p = p->next;
			}
			if (!p && !q)
				return (count);
	}
	return (count);
}
