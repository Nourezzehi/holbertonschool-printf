/**
* _printf - print the required
* @format: the given format
* Return: count of letters printed
*/
#include "main.h"
int _printf(const char *format, ...)
{
	va_list args;
	format_t tab[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int}
	};

	if (!format)
		return (0);
	va_start(args, format);
	return (handle(args, tab, format));
	va_end(args);
}
