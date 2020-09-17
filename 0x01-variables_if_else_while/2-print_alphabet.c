#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -print alphabet
 *
 * Return: 0
 */
int main(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
