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
		strcpy(s, "(null)");
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

int print_percent(__attribute__ ((unused)) va_list args)
{
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
	int num, count = 0;

	num = va_arg(args, int);
	if (num == INT_MIN)
	{
		_putchar('-');
		count += print_num(-num / 10);
		_putchar(8 + '0');
		count += 3;
	}
	else if (num < 0)
	{
		_putchar('-');
		count += print_num(-num);
		count++;
	}
	else
		count += print_num(num);
	return (count);
}
