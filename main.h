#ifndef HEADER_H
#define HEADER_H
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
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
void print_char(va_list);
void print_string(va_list);

#endif
