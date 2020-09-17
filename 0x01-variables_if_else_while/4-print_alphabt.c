#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -print alphabet
 *
 * Result: 0
 */
int main(void)
{
  char letter;
  for(letter = 'a' ; letter <= 'z' ; letter++)
    { if(letter != 'q' && letter != 'e')
	{ putchar(letter);
	}
    }
  putchar('\n');
 return (0);
}
