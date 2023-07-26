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
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
}

/**
 * print_int - print an integer
 * @args: a va_list
*/

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	if (num == INT_MIN)
	{
		_putchar(INT_MIN % 10);
		num /= 10;
	}
	if (num >= 0)
		print_sign(num);
	else
	{
		_putchar('-');
		print_sign(-num);
	}
}
