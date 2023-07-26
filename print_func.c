#include "main.h"

/**
 * print_char - print a char
 * @args: the char to print
*/

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
}

/**
 * print_string - print a string
 * @args: the sring to print
*/
void print_string(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (!s)
		return;
	while(s + i)
	{
		_putchar(*(s + i));
	}
}

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	_putchar(num + '0');
}
