#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char *s;

	s = getenv("PATH");
	printf("%s\n", s);
	s = getenv("HOME");
	printf("%s\n", s);
	s = getenv("USER");
	printf("%s\n", s);
	
	printf("________");

	s = _getenv("PATH");
        printf("%s\n", s);
        s = _getenv("HOME");
        printf("%s\n", s);
        s = _getenv("USER");
        printf("%s\n", s);
	return (0);
}

