#include "main.h"

int conv(va_list args_cp, format_t *tab, const char *format )
{
	int count = 0, ok, j, i = 0;

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
			if (*(format + i) && !ok)
			{
			write(1, format + i - 1, 2);
			}
		}
		else
			_putchar(*(format + i));
		count++;
		i++;
	}
	return (count);
}
