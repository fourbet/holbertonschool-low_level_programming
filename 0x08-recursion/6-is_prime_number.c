B#include "holberton.h"
#include <stdio.h>
/**
 * _prime_number - returns 1 if the input integer is a prime number
 *
 * @n: int
 * @k: int
 * Return: int
 */
int _prime_number(int n, int k)
{
	if (n == 1)
		return (0);
	if (n % k == 0)
		return (0);
	if (k < n - 1)
		return (_prime_number(n, k + 1));
	else
		return (1);
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n > 0)
		return (_prime_number(n, 2));
	else
		return (0);
}

