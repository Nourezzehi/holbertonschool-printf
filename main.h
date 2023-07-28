#ifndef HEADER_H
#define HEADER_H
#include "limits.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - the format components
 * @c: a char
 * @f: the required function
*/
typedef struct format
{
	char c;
	int (*f)(va_list);
} format_t;
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int _printf(const char *format, ...);
int (*get_func(const char ch))(va_list);
int _puts(char *);
int print_binary(va_list);
int _putchar(char);
int print_decimal(va_list);
int print_percent(__attribute__ ((unused)) va_list);

#endif
