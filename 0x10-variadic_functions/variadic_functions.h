#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct format_s - Struct s
 *
 * @type: char
 * @f: the function associated
 */
typedef struct format
{
	char type;
	void (*f)(va_list a);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
