#include "holberton.h"
#include <stdio.h>

/**
 * main - multiples two interger
 *
 * Return: result (Success)
 */

int main(void)
{
	long n = 612852475143;
	long res;

	res = 2;
	while (res < n)
	{
		if (n % res == 0)
		{
			n = n / res;
			res = 1;
		}
		res++;
	}
	printf("%ld\n", n);
	return (0);
}
