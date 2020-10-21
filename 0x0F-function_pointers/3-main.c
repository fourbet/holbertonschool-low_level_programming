#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @ac: int, nbr parameters
 * @av: pointer to an array of char
 *
 * Return: int
 */
int main(int ac, char *av[])
{
	int res = 0;
	int num1 = 0;
	int num2 = 0;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(*(av + 1));
	num2 = atoi(*(av + 3));
	if ((av[2][0] == '/' && num2 == 0)
	    || (av[2][0] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (av[2][0] == '+' || av[2][0] == '-' || av[2][0] == '*'
	     || av[2][0] == '/' || av[2][0] == '%')
	{
		res = get_op_func(av[2])(num1, num2);
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
