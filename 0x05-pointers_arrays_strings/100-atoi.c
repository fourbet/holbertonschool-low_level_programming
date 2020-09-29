#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a char
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int l = 0;
	int i = 0;
	char a;
	int sign = 1;
	int countNum = 0;
	int countNeg = 0;
	int countPos = 0;

	while (s[i] != '\0')
	{
	  a = s[i];
	  if (a >= 48 && a <= 57)/* 0 to 9*/
		  if ( i == countNum + 1 || countNum == 0)
		    {
		      {
			l = l * 10 + a - '0';
			countNum = i;
		      }
		    }
		if (a == 43)/* + */
		  countPos++;
		i++;
		if (a == 45)/* - */
		  countNeg++;
	}
	if (countNeg > countPos)
	  sign = -1;
	return (sign*l);
}
