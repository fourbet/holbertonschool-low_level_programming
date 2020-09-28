#include "holberton.h"
#include <stdio.h>
/**
 * rev-string - reverse string
 * @s: pointer to a char
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char tmp = '0';
	int j = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	i--; /* length s */
	j = 0;
	while( j <= i)
	{
		tmp= s[j];
		s[j] = s[i];
		printf(" Value of tmp, s[j] ,j ,i : %c, %d, %d, %d \n",tmp, s[j], j, i);
		*(s+(i-j)) = tmp;
		j++;
		i--;
	}
	printf(" Value of i,j : %d, %d \n", i,j);
	printf(" Value of c[8] : %d\n", s[8]);
	printf("Value of c[0] : %d\n", s[0]);
	
}
