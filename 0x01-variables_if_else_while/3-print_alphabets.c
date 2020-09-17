#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -print alphabet lower then upercase
 *
 * Result: 0
 */
int main(void)
{
  char letter;
  char letter2;
  letter = 'a';
  letter2 = 'A';
  while (letter <= 'z')
    { putchar(letter);
      letter++;
    }
  while (letter2 <= 'Z')
    { putchar(letter2);
      letter2++;
    }
  putchar('\n');
 return (0);
}
