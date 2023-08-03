#include "main.h"

/**
 * print_decimal - prints a decimal
 *
 * @args: args list
 *
 * Return: count
*/

int print_decimal(va_list args)
{
	unsigned int dec, j = 1, count = 0;
	int num;

	num = va_arg(args, int);
	if (num < 0)
	{
		num = (-num);
		count += _putchar('-');
	}
	dec = num;
	while (dec > 9)
	{
		dec /= 10;
		j *= 10;
	}
	while (j >= 1)
	{
		count += _putchar(((num / j) % 10) + '0');
		j /= 10;
	}
	return (count);
}
