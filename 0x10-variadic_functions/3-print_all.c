#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: const pointer of const char
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list valist;	
	int i = 0;
	int ignored = 0;
	char *s;
	char *separator =", ";

	va_start(valist, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 's' :
			s = va_arg(valist, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			break;
		case 'i' :
			printf("%i", va_arg(valist, int));
			break;
		case 'f' :
			printf("%f", va_arg(valist, double));
			break;
		case 'c' :
			printf("%c", (char) va_arg(valist, int));
			break;
		default :
			ignored = 1;
			break;
		}
		if (format[i + 1] != '\0' && !ignored)
                        printf("%s", separator);
		i++;
		ignored = 0;
	}
	va_end(valist);
	printf("\n");
}
