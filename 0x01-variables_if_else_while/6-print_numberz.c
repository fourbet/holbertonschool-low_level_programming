#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -numbers
 *
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0 ; num < 10 ; num++)
{putchar((num % 10) + '0');
}
putchar('\n');
return (0);
}
