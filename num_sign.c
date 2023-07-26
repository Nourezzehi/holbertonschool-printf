/**
 * print_sign - print the number
 * depending on its sign
 * @num: the given number to print
 *
*/

#include "main.h"

int print_sign(int num)
{
	int count = 0;

	while (num / 10)
	{
		count ++;
		_putchar(num % 10 + '0');
		num /= 10;
	}
	if (num % 10)
		_putchar(num + '0');
	return(count + 1);
}
