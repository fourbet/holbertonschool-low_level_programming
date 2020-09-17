#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - combination 2
 *
 * Return: 0
 */
int main(void)
{
int i;
i = 0;
while (i < 100)
{putchar((i / 10) + '0'); /*first digit*/
putchar((i % 10) + '0'); /* last digit*/
if (i != 99)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
