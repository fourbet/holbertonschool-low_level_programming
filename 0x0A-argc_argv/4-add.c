#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program which adds positive numbers
 *
 * @argc: int, number of arguments
 * @argv: array of pointer to these arguments
 *
 * Return: int, 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int sumCheck = 0;
	int count = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
		while (argc--)
		{
			sumCheck = sum;
			sum += atoi(*(argv++));
			if (sumCheck == sum && count != 0 && *(argv++) != 0)
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		printf("%d\n", sum);
		return (0);
}
