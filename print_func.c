#include "main.h"

/**
 * print_char - print a char
 * @args: the char to print
*/

void print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
}

/**
 * print_string - print a string
 * @args: the sring to print
*/
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (!s)
		return;
	write(1, s, strlen(s));
}
