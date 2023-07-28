#include "main.h"

/**
 * print_char - print a char
 * @args: the char to print
 * Return: count
*/

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - print a string
 * @args: the sring to print
 * Return: count
*/
int print_string(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (!s)
		s = "(null)";
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
/**
 * print_percent - print '%'
 * @args: a va_list
 * Return: count
*/

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_int - print an integer
 * @args: a va_list
 * Return: count
*/
int print_int(va_list args)
{
	return (print_decimal(args));
}
