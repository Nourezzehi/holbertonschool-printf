/**
* _printf - print the required
* @format: the given format
* Return: count of letters printed
*/
#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0, j, count = 0, ok;
	va_list args, args_cp;
	format_t tab[] = {
		{'c', print_char},
		{'s', print_string}
	};

	if (!format)
		return (0);
	va_start(args, format);
	va_copy(args_cp, args);
	while (*(format + i))
	{
		ok = 0;
		j = 0;
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) == '\0')
				return (count);
			while (j < 2 && !ok)
			{
				if (*(format + i) == (tab + j)->c)
				{
					ok = 1;
					(tab + j)->f(args_cp);
				}
				j++;
			}
			if (!ok)
			{
			write(1, format + i - 1, 2);
			}
			i++;
		}
		else
		{
			write(1, format + i, 1);
			i++;
		}
		count++;
	}
	va_end(args_cp);
	return (count);
}
