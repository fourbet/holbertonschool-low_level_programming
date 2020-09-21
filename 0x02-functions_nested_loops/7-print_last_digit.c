#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: int
 * Return: absolute value
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = (n % 10) + '0';
	_putchar(l);
	return (0);
}
