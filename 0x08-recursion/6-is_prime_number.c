#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int a = 100;

	if (n < 0)
		return (0);
	if (n == 1)
		return(1);
	else
	{
		a = (n / is_prime_number(n -1));
		if (a == n)
			return (n-a);
		else
			return (a);
	}
}
