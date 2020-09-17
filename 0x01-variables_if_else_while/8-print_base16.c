#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -hexadecimal
 *
 * Return: 0
 */
int main(void)
{
int i;
int j;
i = 0;
j = 49;
while (i < 10)
{putchar((i % 100) + '0');
i++;
}
while (j < 55)
{putchar((j % 100) + '0');
j++;
}
putchar('\n');
return (0);
}
