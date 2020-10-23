#include "variadic_functions.h"

/**
 * print_strings - prints numbers with separator
 *
 * @separator: const pointer of char
 * @n: const unsigned int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *s;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(valist, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(valist);
	printf("\n");
}
