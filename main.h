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
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int handle(va_list, format_t *, const char *);
int _putchar(char);
int print_num(int);
int print_percent(__attribute__ ((unused)) va_list);

#endif
