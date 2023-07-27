#include "main.h"

/**
 * handle - do the all work here
 *
 * @args: a va_list
 * @tab: the struct to hold characters
 * and their associated functions
 * @format: the _printf given format
 * Return: count of printed characters
*/

int handle(va_list args, format_t *tab, const char *format)
{
	int ok, j, i = 0, count = 0;

	while (*(format + i))
	{
		ok = 0;
		j = 0;
		if (*(format + i) == '%')
		{
			if (!*(format + i + 1))
				return (count);
			i++;
			while (j < 5 && !ok)
			{
				if (*(format + i) == (tab + j)->c)
				{
					ok = 1;
					count += (tab + j)->f(args);
				}
				j++;
			}
			if (!ok)
			{
				write(1, format + i - 1, 2);
				count += 2;
			}
			i++;
		}
		else if (*(format + i) != '%' && *(format + i) != '\0')
		{
			_putchar(*(format + i));
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
