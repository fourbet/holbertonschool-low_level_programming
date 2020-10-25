#include "variadic_functions.h"
/**
 * print_string - prints string
 *
 * @valist: va_list
 *
 * Return: void
 */
void print_string(va_list valist)
{
	char *s = "(nil)";
	char *string = va_arg(valist, char *);

	if (string == NULL)
		string = s;
	printf("%s", string);
}
/**
 * print_char - prints char
 *
 * @valist: va_list
 *
 * Return: void
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_float - prints float
 *
 * @valist: va_list
 *
 * Return: void
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * print_int - prints int
 *
 * @valist: va_list
 *
 * Return: void
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
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
	int j = 0;
	char *separator = "";

	format_t print[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);
	while (format && format[i])
	{
		while (print[j].type != '\0')
		{
			if (format[i] == print[j].type)
			{
				printf("%s", separator);
				print[j].f(valist);
				separator = ", ";
		}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(valist);
	printf("\n");
}
