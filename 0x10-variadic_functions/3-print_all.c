#include "variadic_functions.h"
/**
 * print_string - prints string
 *
 * @s: pointer to char
 *
 * Return: void
 */
void print_string(va_list valist)
{
	printf("%s", va_arg(valist, char *));
}
/**
 * print_char - prints char
 *
 * @c: char
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
 * @f: float
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
 * @i: int
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
	char *separator = ", ";
	int passed = 0;

	format_t print[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(valist, format);

	while (format[i])
	{
		while (print[j].type != '\0')
		{
			if (format[i] == print[j].type)
			{
				print[j].f(valist);
				passed = 1;
			}
			j++;
		}
		if (format[i + 1] != '\0' && passed)
			printf("%s", separator);
		passed = 0;
		j = 0;
		i++;
	}
	va_end(valist);
	printf("\n");
}
