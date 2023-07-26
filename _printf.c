/**
* _printf - print the required
* @format: the given format
* Return: count of letters printed
*/
#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args, args_cp;
	format_t tab[] = {
		{'c', print_char},
		{'s', print_string}
	};

	if (!format)
		return (0);
	va_start(args, format);
	va_copy(args_cp, args);
	count = conv(args_cp, tab, format);
	va_end(args_cp);
	return (count);
}
