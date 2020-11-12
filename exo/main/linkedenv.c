#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
        char *str;
        struct list_s *next;
} list_t;
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

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("(nil)\n");
		h = h->next;
		counter++;
	}
	return (counter);
}


/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to a pointer to a list_t
 *
 * @str: const string
 *
 * Return: the adress of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}




int nbr_words(char *str, char *sep)
{
        int i = 0, j = 0, count = 0;

        while (str[i] != '\0')
        {
                while(sep[j] != '\0')
                {
                        if (str[i] == sep[j])
                                count++;
                        j++;
                }
                j = 0;
                i++;
        }
        return (count + 1);
}

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
                i++;
        return (i);
}

char *_getpathlinked(void)
{
        extern char **environ;
        char *env = NULL;
	char **tab;
	char *res = NULL;
	int i = 0;
	int nbr = 0;
	int k = 0;
	int count = 0;
	list_t *head;
	
	head = NULL;
	printf("____________________________\n");
	while (environ[i] != NULL)
	{
		res = strtok(environ[i], "=\n");
		if ((strcmp(res, "PATH") == 0))
		{
			res = strtok(NULL, "=\n");
			printf("res (env): %s\n", res);			
			count = nbr_words(res, ":\n");
			env = strtok(res,":\n");
			printf("env : %s\n", env);
			add_node_end(&head, env);
			while (k <= count - 1 )
			{
				env = strtok(NULL, ":\n");
				if (env != NULL)
				{
					printf(" env : %s\n", env);
					add_node_end(&head, env);
				}
				k++;
			}
			break;
		}
		i++;
	}
	print_list(head);
}
int main(void)
{
	_getpathlinked();
	return (0);
}
