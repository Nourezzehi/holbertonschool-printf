#include "main.h"

/**
 * get_func - call the right function
 *
 * and their associated functions
 * @ch: the _printf given character
 * Return: count of printed characters
*/

int (*get_func(char ch))(va_list args)
{
	int i;
	format_t tab[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary}
	};

	for (i = 0; i < 5; i++)
	{
		if ((tab + i)->c == ch)
			return ((tab + i)->f);
	}
	return (NULL);
}
