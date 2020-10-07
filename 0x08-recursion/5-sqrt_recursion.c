#include "holberton.h"
#include <stdio.h>

/**
 *_sqrt - returns the natural square root of a number
 *
 * @n: int
 * @k: int
 * Return: int
 */
int _sqrt(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k < n)
		return (_sqrt(n, k + 1));
	else
		return (-1);
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n != 0)
		return (_sqrt(n, 0));
	else
		return (0);
}
