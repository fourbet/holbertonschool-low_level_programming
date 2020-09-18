#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - combination 3
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int a;
	int b;

	i = 0;
	while (i < 100)
	{
		a = ((i / 10) + '0'); /*first digit*/
		b = ((i % 10) + '0'); /* last digit*/
		if (a < b)
		{
			if (i != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(a);
			putchar(b);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
