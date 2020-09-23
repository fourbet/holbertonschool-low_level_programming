#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table 
 * @n: int
 *
 * Description: starting with 0
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i*j;
				printf("%d", k);
				if (j != n)
				{ printf(", ");
				}
				if (k <= 9)
					printf("  ");
				else if (k > 9 && k <= 99)
					printf(" ");
			}
		printf("\n");
		}
	}
      
}
