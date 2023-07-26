#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
/**
 * struct format - the format components
 * @c: a char
 * @f: the required function
*/
typedef struct format
{
	char c;
	void (*f)(va_list);
} format_t;
#include <unistd.h>
int _printf(const char *format, ...);
void print_char(va_list);
void print_string(va_list);
void print_int(va_list);
int conv(va_list, format_t *, const char *);
int _putchar(char);

#endif
