#include "main.h"

/**
 * conv - do the all work here
 *
 * @args: a va_list
 * @tab: the struct to hold characters
 * and their associated functions
 * @format: the _printf given format
 * Return: count of printed characters
*/

int conv(va_list args, format_t *tab, const char *format)
{
	int ok, j, i = 0;

	while (*(format + i))
	{
		ok = 0;
		j = 0;
		if (*(format + i) == '%' && *(format + i + 1))
		{
			i++;
			while (j < 4 && !ok)
			{
				if (*(format + i) == (tab + j)->c)
				{
					ok = 1;
					(tab + j)->f(args);
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
			_putchar(*(format + i));
			i++;
		}
	}
	va_end(args);
	return (i);
}
