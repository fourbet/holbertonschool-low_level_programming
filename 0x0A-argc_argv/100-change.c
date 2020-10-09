#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program which prints the minimum number of coins to make change
 *
 * @argc: int, number of arguments
 * @argv: array of pointer to these arguments
 *
 * Return: int, 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(*(argv + 1));
		while (cents > 0)
		{
			if (cents % 25 == 0)
			{
				cents -= 25;
			}
			else if (cents % 10 == 0)
				cents -= 10;
			else if (cents % 5 == 0)
				cents -= 5;
			else if (cents % 2 == 0)
				cents -= 2;
			else
				cents -= 1;
			count++;
		}
		printf("%d\n", count);
		return (0);
	}
}

