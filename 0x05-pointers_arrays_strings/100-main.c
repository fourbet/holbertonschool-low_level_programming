#include "holberton.h"
#include <stdio.h>

/**
 * main - check
 *
 * Return: Always 0.
 */
int main(void)
{
  int n;

  n =_atoi("98");
  printf("%d\n", n);
  n =_atoi("coucou");
  printf("%d\n", n);
  n =_atoi("salut21alut");
  printf("%d\n" ,n);
  n =_atoi("78b50");
  printf("%d\n",n);
  n=_atoi("bob69");
  printf("%d\n", n);
  n=_atoi("-402");
  printf("%d\n", n);
  n=_atoi("     ---+++-98");
  printf("%d\n", n);
  return (0);
}
