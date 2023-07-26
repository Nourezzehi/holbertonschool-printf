#include "main.h"

/**
 * print_char - print a char
 * @args: the char to print
*/

int print_char(va_list args)
{
	char c;
	int i = 1;

	c = va_arg(args, int);
	_putchar(c);
	return(i);
}

/**
 * print_string - print a string
 * @args: the sring to print
*/
int print_string(va_list args)
{
	char *s;
	int i = 0;

	s = va_arg(args, char *);
	if (!s)
		return (0);
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}

/**
 * print_int - print an integer
 * @args: a va_list
*/

int print_int(va_list args)
{
	int num, count = 0;

	num = va_arg(args, int);
	if (num == INT_MIN)
	{
		count++;
		_putchar(INT_MIN % 10);
		num /= 10;
	}
	if (num >= 0)
		count += print_sign(num);
	else
	{
		count++;
		_putchar('-');
		count += print_sign(-num);
	}
	return (count);
}
