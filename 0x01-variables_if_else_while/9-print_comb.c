#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - combination
 *
 * Return: 0
 */
int main(void)
{
  int i;
  i = 0;
while (i < 10)
  {putchar((i % 10) + '0');
    if ( i != 9)
      {
    putchar(',');
    putchar(' ');
      }
    i++;
}
putchar('\n');
return (0);
}
