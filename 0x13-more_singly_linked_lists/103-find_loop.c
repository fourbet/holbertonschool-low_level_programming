#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 *@head: pointer to a listint_t
 *
 * Return: number of nodes in the list
 */

listint_t *find_listint_loop(listint_t *head)
{
	size_t count = 0;
	int loop = 0;
	listint_t  *p;
	listint_t *q;
	listint_t *begin;

	p = head;
	q = head;
	begin = head;
	while (head)
	{
		if (loop == 1 && (p == q))
			return (p);

		if ((p == q) && count != 0)
		{
			p = begin;
			loop = 1;
		}
		count++;
		q = q->next;
		if (p)
		{
			p = p->next;
			if (p && loop == 0)
				p = p->next;
		}
		if (!p && !q)
			return (NULL);
	}
	return (NULL);
}
