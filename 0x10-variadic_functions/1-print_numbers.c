#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 *
 * @separator: const pointer of char
 * @n: const unsigned int
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator == NULL)
		{
			if (i != n - 1)
				printf(" ");
		}
		else if (i != n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
