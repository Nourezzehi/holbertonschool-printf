#include "main.h"

/**
* _printf - print the required
* @format: the given format
* Return: count of letters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int (*print_func)(va_list);
	int count = 0;
	const char *p;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			print_func = get_func(*p);
			if (print_func)
				count += print_func(args);
			else
				count += _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}
	va_end(args);
	return (count);
}
