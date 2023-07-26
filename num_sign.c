/**
 * print_sign - print the number
 * depending on its sign
 * @num: the given number to print
 *
*/

#include "main.h"

void print_sign(int num)
{
    while(num / 10)
	{
	    _putchar(num % 10 + '0');
	    num /= 10;
	}
	if (num % 10)
		_putchar(num + '0');
}
