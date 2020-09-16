#include <stdio.h>
/**
 * main - printf
 *
 * Return: 0
 */
int main(void)
{printf("Size of a char: ");
printf("%lu", sizeof(char));
printf(" byte(s)\n");
printf("Size of an int: ");
printf("%lu", sizeof(int));
printf(" byte(s)\n");
printf("Size of a long int: ");
printf("%lu", sizeof(longint));
printf(" byte(s)\n");
printf("Size of a long long int: ");
printf("%lu", sizeof(longlongint));
printf(" byte(s)\n");
printf("Size of a float: ");
printf("%lu", sizeof(float));
printf(" byte(s)\n");
return (0); }
